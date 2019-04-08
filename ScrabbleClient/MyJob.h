//
// Created by david on 08/04/19.
//

#ifndef SCRABBLECLIENT_MYJOB_H
#define SCRABBLECLIENT_MYJOB_H

#include <QObject>
#include <QDebug>
#include <QThread>

class MyJob : public QObject{
    Q_OBJECT
public:
    explicit MyJob(QObject* parent = 0);

    void start(QString name);

    signals:
        void on_number(QString name, int number);

public slots:
    void stop();

private:
    bool mStop;
};


#endif //SCRABBLECLIENT_MYJOB_H
