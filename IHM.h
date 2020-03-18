//
// Created by upupu on 18/03/2020.
//

#ifndef QT_TP3_IHM_H
#define QT_TP3_IHM_H

#include <QApplication>
#include <QtWidgets/QSlider>
#include <QtWidgets/QProgressBar>


class IHM : public QWidget {
private:
    QSlider* slider;
    QProgressBar* progressBar;
public:
    IHM(QWidget* = nullptr);
};

#endif //QT_TP3_IHM_H