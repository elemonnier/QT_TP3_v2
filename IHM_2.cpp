//
// Created by upupu on 19/03/2020.
//
#include <iostream>
#include <QtWidgets/QVBoxLayout>
#include "IHM_2.h"

using namespace std;

IHM_2::IHM_2(QString text, QWidget* parent) : QWidget(parent) {
    this->setWindowTitle("IHM");
    this->setMinimumSize(200, 100);
    this->button = new QPushButton(text, this);
    this->button->setText(text);
    this->textEdit = new QTextEdit();
    this->textEdit->setMaximumHeight(100);
    this->textEdit->setText("texte initial");
    auto layout = new QVBoxLayout();
    layout->addWidget(this->button);
    layout->addWidget(this->textEdit);
    this->setLayout(layout);

//    connect(this->button, SIGNAL(clicked()), this, SLOT(close()));

    connect(this->button, SIGNAL(clicked()), this, SLOT(printName()));

//    connect(this->button, SIGNAL(clicked()), this, SLOT(printIHM()));
}

void IHM_2::printName() { // todo voir probleme static
    IHM_2::count++;
    this->button->setText("new text");
    this->textEdit->setText("new text");
}
//
//void IHM_2::printIHM() {
//
//}