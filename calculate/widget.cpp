#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(400,570));
    this->resize(QSize(400,570));


    main_widget = new QWidget(this);
    //main_widget->setStyleSheet("background-color: white");
    main_widget->setGeometry(QRect(0, 270, 400, 300));
    main_widget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    numbers_gridlayout = new QGridLayout(main_widget);
    numbers_gridlayout->setSpacing(3);
    numbers_gridlayout->setSizeConstraint(QLayout::SetMinAndMaxSize);

    n1 = new QPushButton(main_widget);
    n1->setStyleSheet("background: red");
    n1->setText("1");
    n1->setMinimumSize(QSize(5,5));
    n1->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    n2 = new QPushButton(main_widget);
    n2->setStyleSheet("background: red");
    n2->setText("2");
    n2->setMinimumSize(QSize(3,3));
    n2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    n3 = new QPushButton(main_widget);
    n3->setStyleSheet("background: red");
    n3->setText("3");
    n3->setMinimumSize(QSize(3,3));
    n3->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    n4 = new QPushButton(main_widget);
    n4->setStyleSheet("background: red");
    n4->setText("4");
    n4->setMinimumSize(QSize(3,3));
    n4->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    n5 = new QPushButton(main_widget);
    n5->setStyleSheet("background: red");
    n5->setText("5");
    n5->setMinimumSize(QSize(3,3));
    n5->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    n6 = new QPushButton(main_widget);
    n6->setStyleSheet("background: red");
    n6->setText("6");
    n6->setMinimumSize(QSize(3,3));
    n6->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    n7 = new QPushButton(main_widget);
    n7->setStyleSheet("background: red");
    n7->setText("7");
    n7->setMinimumSize(QSize(3,3));
    n7->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    n8 = new QPushButton(main_widget);
    n8->setStyleSheet("background: red");
    n8->setText("8");
    n8->setMinimumSize(QSize(3,3));
    n8->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    n9 = new QPushButton(main_widget);
    n9->setStyleSheet("background: red");
    n9->setText("9");
    n9->setMinimumSize(QSize(3,3));
    n9->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    n0 = new QPushButton(main_widget);
    n0->setStyleSheet("background: red");
    n0->setText("0");
    n0->setMinimumSize(QSize(3,3));
    n0->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    plus_or_minus = new QPushButton(main_widget);
    plus_or_minus->setStyleSheet("background: gray");
    plus_or_minus->setText("+ / -");
    plus_or_minus->setMinimumSize(QSize(3,3));
    plus_or_minus->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    coma = new QPushButton(main_widget);
    coma->setStyleSheet("background: gray");
    coma->setText(",");
    coma->setMinimumSize(QSize(3,3));
    coma->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    equal = new QPushButton(main_widget);
    equal->setStyleSheet("background: gray");
    equal->setText("=");
    equal->setMinimumSize(QSize(3,3));
    equal->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    addition = new QPushButton(main_widget);
    addition->setStyleSheet("background: gray");
    addition->setText("+");
    addition->setMinimumSize(QSize(3,3));
    addition->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    subtraction = new QPushButton(main_widget);
    subtraction->setStyleSheet("background: gray");
    subtraction->setText("=");
    subtraction->setMinimumSize(QSize(3,3));
    subtraction->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    multiplication = new QPushButton(main_widget);
    multiplication->setStyleSheet("background: gray");
    multiplication->setText("x");
    multiplication->setMinimumSize(QSize(3,3));
    multiplication->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    divide = new QPushButton(main_widget);
    divide->setStyleSheet("background: gray");
    divide->setText("%");
    divide->setMinimumSize(QSize(3,3));
    divide->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    backspace = new QPushButton(main_widget);
    backspace->setStyleSheet("background: gray");
    backspace->setText("<=");
    backspace->setMinimumSize(QSize(3,3));
    backspace->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    delete_button = new QPushButton(main_widget);
    delete_button->setStyleSheet("background: gray");
    delete_button->setText("C");
    delete_button->setMinimumSize(QSize(3,3));
    delete_button->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    delete_button2 = new QPushButton(main_widget);
    delete_button2->setStyleSheet("background: gray");
    delete_button2->setText("CE");
    delete_button2->setMinimumSize(QSize(3,3));
    delete_button2->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    addPushButtonsToGridLayout();

    result_widget = new QWidget(this);
    result = new QLineEdit(result_widget);
    result->setGeometry(QRect(0,200,400,50));
    result->setStyleSheet("border: black");

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

