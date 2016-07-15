#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include "matrix.h"
#include <QColor>
#include <QWidget>

class GameWidget : public QWidget {
  Q_OBJECT
public:
  explicit GameWidget(QWidget *parent = 0);
  ~GameWidget();

protected:
  void paintEvent(QPaintEvent *);
  void mousePressEvent(QMouseEvent *e);
  void mouseMoveEvent(QMouseEvent *e);

  void environmentChanged(bool ok);

public slots:
  void start();
  void restart();
  void clear();

private slots:
  void paintGrid(QPainter &p);
  void paintUniverse(QPainter &p);
  void newGeneration();

private:
  QColor masterColor;
  QTimer *timer;
//  bool *universe; // current map
//  bool *next;     // next map
  int size;
  GOLMatrix current;
  bool isAlive(int k, int j);
};

#endif // GAMEWIDGET_H
