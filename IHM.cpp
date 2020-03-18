//
// Created by upupu on 18/03/2020.
//

#include <QtWidgets/QHBoxLayout>
#include "IHM.h"

IHM::IHM(QWidget * parent) : QWidget(parent) {
    this->setWindowTitle("IHM");
    auto layout = new QVBoxLayout();
    this->slider = new QSlider(Qt::Horizontal);
    this->progressBar = new QProgressBar;
    layout->addWidget(this->slider);
    layout->addWidget(this->progressBar);
    this->setLayout(layout);
}