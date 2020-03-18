//
// Created by upupu on 18/03/2020.
//

#include "IHM.h"

IHM::IHM(QWidget * parent) : QWidget(parent) {
    this->setWindowTitle("IHM");
    
    this->slider = new QSlider;
    this->progressBar = new QProgressBar;

}