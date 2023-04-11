#ifndef FORM_H
#define FORM_H



#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private:
    Ui::Form *ui;

private slots:
    void on_pushButton_clicked();

signals:
    void signalForm(QString);

public slots:
    void slot(QString a);
};

#endif // FORM_H
