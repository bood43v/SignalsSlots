#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

///Слот у второй формы
void Form::slot(QString a)
{
    ui->label->setText(a);
}

/// Сигнал второй формы
void Form::on_pushButton_clicked()
{
    emit signalForm(ui->lineEdit->text());
}

