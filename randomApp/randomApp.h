#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_randomApp.h"

class randomApp : public QMainWindow
{
    Q_OBJECT

public:
    randomApp(QWidget *parent = nullptr);
    ~randomApp();

private:
    Ui::randomAppClass *ui;

private slots:
	void on_pushButton_clicked();

 
};

