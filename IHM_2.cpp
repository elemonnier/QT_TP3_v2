//
// Created by upupu on 19/03/2020.
//
#include <iostream>
#include <QtWidgets/QVBoxLayout>
#include "IHM.h"
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

    /// Q2

//    connect(this->button, SIGNAL(clicked()), this, SLOT(close()));

    /// Q3

//    connect(this->button, SIGNAL(clicked()), this, SLOT(printName()));

    /// Q5

//    connect(this->button, SIGNAL(clicked()), this, SLOT(printInTextEdit()));

    /// Q6

//    connect(this->button, SIGNAL(clicked()), this, SLOT(printIHM()));
}

void IHM_2::printName() {
    this->count++;
    cout << "Example" << this->count << "\n";
    QString text = "Example";
    text.append(QString::number(this->count));
    this->button->setText(text);
}

void IHM_2::printInTextEdit() {
    this->count++;
    this->textEdit->clear();
    for (int i = 1; i <= this->count; i++){
        QString text = "Example";
        text.append(QString::number(i));
        this->textEdit->append(text);
    }
    this->textEdit->append("texte initial");
    QString text = "Example";
    text.append(QString::number(this->count));
    this->button->setText(text);
}

void IHM_2::printIHM() {
    auto new_ihm = new IHM();
    new_ihm->show();
}