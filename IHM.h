//
// Created by upupu on 18/03/2020.
//

#ifndef QT_TP3_IHM_H
#define QT_TP3_IHM_H

#include <QApplication>
#include <QtWidgets/QSlider>
#include <QtWidgets/QProgressBar>
#include <QObject>


class IHM : public QWidget {
    Q_OBJECT
private:
    QSlider* slider;
    QProgressBar* progressBar;
public:
    IHM(QWidget* = nullptr);
signals:
    void valueChanged(int);
public slots:
};

#endif //QT_TP3_IHM_H