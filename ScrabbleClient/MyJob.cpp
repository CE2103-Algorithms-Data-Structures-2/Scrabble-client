//
// Created by david on 08/04/19.
//

#include "MyJob.h"

MyJob::MyJob(QObject *parent) : QObject(parent) {
    mStop = false;
}

void MyJob::start(QString name) {
    mStop = false;

    emit on_number("prueba", 42);
}

void MyJob::stop() {
    mStop = true;
}