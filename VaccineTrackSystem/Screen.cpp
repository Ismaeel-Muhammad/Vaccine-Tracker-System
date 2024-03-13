#include "Screen.h"

Screen::Screen(QWidget* parent)
    : QMainWindow(parent)
  

{
    ui.setupUi(this);
    ui.stackedWidget->setCurrentIndex(2);
  
    // Hiding Passwords 
    ui.lineEdit_5->setEchoMode(QLineEdit::Password);
    ui.lineEdit_4->setEchoMode(QLineEdit::Password);


    //National ID Validation    
    //home
    ui.lineEdit_3->setValidator(new QDoubleValidator());
    ui.lineEdit_3->setMaxLength(14);
    //user
    ui.lineEdit_2->setValidator(new QDoubleValidator());
    ui.lineEdit_2->setMaxLength(14);
    //search
    ui.lineEdit_11->setValidator(new QDoubleValidator());
    ui.lineEdit_11->setMaxLength(14);
    

    //Three Digits as maximum Age
    ui.lineEdit_8->setValidator(new QIntValidator());
    ui.lineEdit_8->setMaxLength(3);

}

//Home buttons

//SignUp button
void Screen::on_signuplink_2_clicked()
{
    isAdmin = false;
    User_Control();
    ui.stackedWidget->setCurrentIndex(0);

}

//User logIn button
void Screen::on_logIn_clicked()
{
    isAdmin = false;
    User_Control();
    ui.stackedWidget->setCurrentIndex(0);
}

//Admin logIn button
void Screen::on_logIn_2_clicked()
{
    isAdmin = true;
    ui.stackedWidget->setCurrentIndex(1);
}

//User form buttons

//User back Button
void Screen::on_BackBtn_clicked()
{
   
    if (isAdmin)
    {
 
        ui.stackedWidget->setCurrentIndex(1);
    }
    else
    {
        ui.stackedWidget->setCurrentIndex(2);
    }  
}

//Removing Record
void Screen::on_RemoveBtn_clicked()
{

}

//Stats form button

//Back From Stats to Admin
void Screen::on_backToAdmin_clicked()
{
    ui.stackedWidget->setCurrentIndex(1);

}

//Admin buttons

//advanced stats 
void Screen::on_moreStat_clicked()
{
    ui.stackedWidget->setCurrentIndex(3);
}


//Back
void Screen::on_back_clicked()
{
    isAdmin = false;
    ui.stackedWidget->setCurrentIndex(2);
}

//Search
void Screen::on_search_clicked()
{
    Admin_Control();
    ui.stackedWidget->setCurrentIndex(0);
}




void Screen::on_pushButton_clicked()
{
    ui.stackedWidget->setCurrentIndex(1);

}

void Screen::on_pushButton_2_clicked()
{
    ui.stackedWidget->setCurrentIndex(4);
}

//Save Before Closing
void Screen::closeEvent(QCloseEvent* event)
{
    event->accept();
}

//Access controls
void Screen::Admin_Control()
{
    if (isAdmin)
    {
        ui.lineEdit->setReadOnly(true);
        ui.lineEdit_2->setReadOnly(true);
        ui.lineEdit_6->setReadOnly(true);
        ui.lineEdit_8->setReadOnly(true);
        ui.lineEdit_7->setReadOnly(true);
        ui.comboBox->setDisabled(true);
        ui.groupBox->setDisabled(true);
        ui.groupBox_2->setDisabled(true);
        ui.EditBtn->setDisabled(true);
        ui.SignUpBtn->setDisabled(true);
    }
}

void Screen::User_Control() 
{
    if (!isAdmin)
    {
        ui.lineEdit->setReadOnly(false);
        ui.lineEdit_2->setReadOnly(false);
        ui.lineEdit_6->setReadOnly(false);
        ui.lineEdit_8->setReadOnly(false);
        ui.lineEdit_7->setReadOnly(false);
        ui.comboBox->setDisabled(false);
        ui.groupBox->setDisabled(false);
        ui.groupBox_2->setDisabled(false);
        ui.EditBtn->setDisabled(false);
        ui.SignUpBtn->setDisabled(false);
    }
}

