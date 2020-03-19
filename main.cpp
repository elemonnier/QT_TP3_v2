#include <iostream>
#include <QApplication>
#include "IHM.h"
#include "IHM_2.h"

int main(int argc, char** argv) {
    auto app = new QApplication (argc, argv);
//    auto ihm = new IHM;
//    ihm->show();

    auto ihm2 = new IHM_2("text");
    ihm2->show();
    return app->exec();
}