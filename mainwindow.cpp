#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColor>
#include <QDebug>
#include <QFileDialog>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow),
      currentColor(QColor(palette().color(QPalette::Highlight))),
      game(new GOLWidget(this)) {
  ui->setupUi(this);

  QPixmap icon(16, 16);
  icon.fill(currentColor);

  connect(ui->startButton, SIGNAL(clicked()), game, SLOT(start()));
  connect(ui->stopButton, SIGNAL(clicked()), game, SLOT(stop()));
  connect(ui->tickButton, SIGNAL(clicked()), game, SLOT(tick()));
  connect(ui->clearButton, SIGNAL(clicked()), game, SLOT(clear()));

  ui->mainLayout->setStretchFactor(ui->gameLayout, 8);
  ui->mainLayout->setStretchFactor(ui->controlsLayout, 2);
  ui->gameLayout->addWidget(game);
}

MainWindow::~MainWindow() { delete ui; }
