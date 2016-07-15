#include "gamewidget.h"
#include <QDebug>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPainter>
#include <QRectF>
#include <QTimer>
#include <qmath.h>

GOLWidget::GOLWidget(QWidget *parent)
    : QWidget(parent), timer(new QTimer(this)), size(50), current(size) {

  timer->setInterval(100);
  masterColor = palette().color(QPalette::Highlight);
  connect(timer, SIGNAL(timeout()), this, SLOT(next()));
}

GOLWidget::~GOLWidget() { delete &current; }

void GOLWidget::start() { timer->start(); }

void GOLWidget::restart() {
  clear();
  timer->stop();
}

void GOLWidget::clear() {
  current.clear();
  update();
}

bool GOLWidget::isAlive(int x, int y) {
  int power = 0;
  power += current(x + 1, y) + current(x - 1, y) + current(x, y + 1) +
           current(x, y - 1) + current(x + 1, y - 1) + current(x - 1, y + 1) +
           current(x - 1, y - 1) + current(x + 1, y + 1);
  if (((current(x, y) == true) && (power == 2)) || (power == 3))
    return true;
  return false;
}

void GOLWidget::next() {
  int notChanged = 0;
  GOLMatrix next(size);
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      next(i, j) = isAlive(i, j);
      if (next(i, j) == current(i, j))
        notChanged++;
    }
  }
  if (notChanged == size * size) {
    QMessageBox::information(this, tr("Game over"),
                             tr("All next generations will be the same."));
    restart();
    return;
  }
  current = next;
  update();
}

void GOLWidget::paintEvent(QPaintEvent *) {
  QPainter p(this);
  paintGrid(p);
  paintCells(p);
}

void GOLWidget::mousePressEvent(QMouseEvent *e) {
  double cellWidth = (double)width() / size;
  double cellHeight = (double)height() / size;
  int y = floor(e->y() / cellHeight);
  int x = floor(e->x() / cellWidth);
  //    universe[k*size + j] = !universe[k*size + j];
  current(y, x) ^= true;
  update();
}

void GOLWidget::mouseMoveEvent(QMouseEvent *e) {
  double cellWidth = (double)width() / size;
  double cellHeight = (double)height() / size;
  int y = floor(e->y() / cellHeight);
  int x = floor(e->x() / cellWidth);
  if (!current(y, x)) {
    current(y, x) ^= true;
    update();
  }
}

void GOLWidget::paintGrid(QPainter &p) {
  QRect borders(0, 0, width() - 1, height() - 1);
  QColor gridColor = masterColor;
  p.setPen(gridColor);
  double cellWidth = (double)width() / size;
  double cellHeight = (double)height() / size;
  for (double k = cellWidth; k <= width(); k += cellWidth)
    p.drawLine(k, 0, k, height());
  for (double k = cellHeight; k <= height(); k += cellHeight)
    p.drawLine(0, k, width(), k);
  p.drawRect(borders);
}

void GOLWidget::paintCells(QPainter &p) {
  double cellWidth = (double)width() / size;
  double cellHeight = (double)height() / size;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (current(i, j)) {
        qreal left = (qreal)(cellWidth * j);
        qreal top = (qreal)(cellHeight * i);
        QRectF r(left, top, (qreal)cellWidth, (qreal)cellHeight);
        p.fillRect(r, QBrush(masterColor));
      }
    }
  }
}
