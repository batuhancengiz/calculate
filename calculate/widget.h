#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QWidget *main_widget;
    QWidget* result_widget;
    QGridLayout *numbers_gridlayout;
    QPushButton *n1;
    QPushButton *n2;
    QPushButton *n3;
    QPushButton *n4;
    QPushButton *n5;
    QPushButton *n6;
    QPushButton *n7;
    QPushButton *n8;
    QPushButton *n9;
    QPushButton *n0;
    QPushButton *coma;
    QPushButton *plus_or_minus;
    QPushButton *delete_button2;
    QPushButton *delete_button;
    QPushButton *divide;
    QPushButton *multiplication;
    QPushButton *subtraction;
    QPushButton *addition;
    QPushButton *backspace;
    QPushButton *equal;
    QLineEdit *result;

    void addPushButtonsToGridLayout();

};
#endif // WIDGET_H
