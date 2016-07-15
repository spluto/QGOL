#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "gamewidget.h"
#include <QColor>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

private:
  Ui::MainWindow *ui;
  QColor currentColor;
  GameWidget *game;
};

#endif // MAINWINDOW_H