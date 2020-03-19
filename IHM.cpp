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
    this->progressBar->setValue(0);
    this->progressBar->valueChanged(50);
    layout->addWidget(this->progressBar);
    layout->addWidget(this->slider);
    this->setLayout(layout);

    connect(this->slider, SIGNAL(valueChanged(int)), this->progressBar, SLOT(setValue(int)));
}