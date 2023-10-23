#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopWidget>

void centerWidgetOnScreen (QWidget * widget) {

    QRect rect = QApplication::desktop()->availableGeometry(widget);

    widget->move(rect.center() - widget->rect().center());
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //The window is centered
    centerWidgetOnScreen(this);
}




MainWindow::~MainWindow()
{
    delete ui;
}

