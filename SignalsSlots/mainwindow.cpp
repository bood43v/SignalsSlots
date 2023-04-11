#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    form = new Form;
    form->show();

    /// Связь сигнала первого окна и слота второго окна
    connect(this, &MainWindow::signal, form, &Form::slot);
    /// Связь сигнала второго окна и слота первого окна
    connect(form, &Form::signalForm, this, &MainWindow::slotForm);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    emit signal(ui->lineEdit->text());
}

void MainWindow::slotForm(QString a)
{
    ui->label->setText(a);
}

