#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColor>
#include <QDebug>
#include <QFileDialog>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow),
      currentColor(QColor(palette().color(QPalette::Highlight))),
      game(new GameWidget(this)) {
  ui->setupUi(this);

  QPixmap icon(16, 16);
  icon.fill(currentColor);

  connect(ui->startButton, SIGNAL(clicked()), game, SLOT(start()));
  connect(ui->restartButton, SIGNAL(clicked()), game, SLOT(restart()));

  ui->mainLayout->setStretchFactor(ui->gameLayout, 8);
  ui->mainLayout->setStretchFactor(ui->controlsLayout, 2);
  ui->gameLayout->addWidget(game);
}

MainWindow::~MainWindow() { delete ui; }
