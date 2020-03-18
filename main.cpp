#include <iostream>
#include <QApplication>
#include "IHM.h"

int main(int argc, char** argv) {
    auto app = new QApplication (argc, argv);
    auto ihm = new IHM;
    ihm->show();

    return app->exec();
}