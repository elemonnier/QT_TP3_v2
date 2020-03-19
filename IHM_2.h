//
// Created by upupu on 19/03/2020.
//

#ifndef QT_TP3_IHM_2_H
#define QT_TP3_IHM_2_H


#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <iostream>

class IHM_2 : public QWidget {
    Q_OBJECT
private:
    QPushButton* button;
    QTextEdit* textEdit;
    static int count;
public:
    IHM_2(QString = "fils", QWidget* = nullptr);
signals:
public slots:
    void printName();
    void printIHM();
};

#endif //QT_TP3_IHM_2_H
