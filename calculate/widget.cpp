#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(400,600));
    this->resize(QSize(400,600));

    main_widget = new QWidget(this);

    numbers_gridlayout = new QGridLayout(main_widget);

    n1 = new QPushButton(main_widget);
    n1->resize(QSize(50,50));
    n1->setStyleSheet("background: red");
    n1->setText("1");


    numbers_gridlayout->addWidget(n1, 0,0,1,1);


}

Widget::~Widget()
{
    delete ui;
}

