#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Screen.h"
#include <QIntValidator>
#include <qtextcursor.h>
#include<qcursor.h>
#include <QCloseEvent>


class Screen : public QMainWindow
{
    Q_OBJECT

public:
    Screen(QWidget *parent = Q_NULLPTR);
    bool isAdmin = false;

private:
    Ui::ScreenClass ui;
   
private slots:
    void on_signuplink_2_clicked();
    void on_BackBtn_clicked();
    void on_logIn_clicked();
    void on_back_clicked();
    void on_search_clicked();
    void on_logIn_2_clicked();
    void on_moreStat_clicked();
    void on_backToAdmin_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_RemoveBtn_clicked();
    void closeEvent(QCloseEvent* event);
    void Admin_Control();
    void User_Control();
};
