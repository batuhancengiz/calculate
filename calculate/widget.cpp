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
    //main_widget->setStyleSheet("background-color: white");
    //main_widget->set

    numbers_gridlayout = new QGridLayout(main_widget);
    numbers_gridlayout->setSpacing(3);


    n1 = new QPushButton(main_widget);
    n1->setStyleSheet("background: red");
    n1->setText("1");
    n1->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    n2 = new QPushButton(main_widget);
    n2->setStyleSheet("background: red");
    n2->setText("2");

    n3 = new QPushButton(main_widget);
    n3->setStyleSheet("background: red");
    n3->setText("3");

    n4 = new QPushButton(main_widget);
    n4->setStyleSheet("background: red");
    n4->setText("4");

    n5 = new QPushButton(main_widget);
    n5->setStyleSheet("background: red");
    n5->setText("5");

    n6 = new QPushButton(main_widget);
    n6->setStyleSheet("background: red");
    n6->setText("6");

    n7 = new QPushButton(main_widget);
    n7->setStyleSheet("background: red");
    n7->setText("7");

    n8 = new QPushButton(main_widget);
    n8->setStyleSheet("background: red");
    n8->setText("8");

    n9 = new QPushButton(main_widget);
    n9->setStyleSheet("background: red");
    n9->setText("9");

    n0 = new QPushButton(main_widget);
    n0->setStyleSheet("background: red");
    n0->setText("0");

    plus_or_minus = new QPushButton(main_widget);
    plus_or_minus->setStyleSheet("background: gray");
    plus_or_minus->setText("+ / -");

    coma = new QPushButton(main_widget);
    coma->setStyleSheet("background: gray");
    coma->setText(",");

    equal = new QPushButton(main_widget);
    equal->setStyleSheet("background: gray");
    equal->setText("=");

    addition = new QPushButton(main_widget);
    addition->setStyleSheet("background: gray");
    addition->setText("+");

    subtraction = new QPushButton(main_widget);
    subtraction->setStyleSheet("background: gray");
    subtraction->setText("=");

    multiplication = new QPushButton(main_widget);
    multiplication->setStyleSheet("background: gray");
    multiplication->setText("x");

    divide = new QPushButton(main_widget);
    divide->setStyleSheet("background: gray");
    divide->setText("%");

    backspace = new QPushButton(main_widget);
    backspace->setStyleSheet("background: gray");
    backspace->setText("<=");

    delete_button = new QPushButton(main_widget);
    delete_button->setStyleSheet("background: gray");
    delete_button->setText("C");

    delete_button2 = new QPushButton(main_widget);
    delete_button2->setStyleSheet("background: gray");
    delete_button2->setText("CE");
    addPushButtonsToGridLayout();


}

Widget::~Widget()
{
    delete ui;
}

void Widget::addPushButtonsToGridLayout(){
    numbers_gridlayout->addWidget(delete_button, 0,0,1,1);
    numbers_gridlayout->addWidget(delete_button2, 0,1,1,1);
    numbers_gridlayout->addWidget(backspace, 0,2,1,1);
    numbers_gridlayout->addWidget(divide, 0,3,1,1);

    numbers_gridlayout->addWidget(n7, 1,0,1,1);
    numbers_gridlayout->addWidget(n8, 1,1,1,1);
    numbers_gridlayout->addWidget(n9, 1,2,1,1);
    numbers_gridlayout->addWidget(multiplication, 1,3,1,1);

    numbers_gridlayout->addWidget(n4, 2,0,1,1);
    numbers_gridlayout->addWidget(n5, 2,1,1,1);
    numbers_gridlayout->addWidget(n6, 2,2,1,1);
    numbers_gridlayout->addWidget(subtraction, 2,3,1,1);

    numbers_gridlayout->addWidget(n1, 3,0,1,1);
    numbers_gridlayout->addWidget(n2, 3,1,1,1);
    numbers_gridlayout->addWidget(n3, 3,2,1,1);
    numbers_gridlayout->addWidget(addition, 3,3,1,1);

    numbers_gridlayout->addWidget(plus_or_minus, 4,0,1,1);
    numbers_gridlayout->addWidget(n0, 4,1,1,1);
    numbers_gridlayout->addWidget(coma, 4,2,1,1);
    numbers_gridlayout->addWidget(equal, 4,3,1,1);
}

