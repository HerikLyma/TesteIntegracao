#ifndef TST_HELLO_H
#define TST_HELLO_H

#include <QtTest>
#include <classes/hello.h>

class TST_Hello : public QObject
{
    Q_OBJECT
private slots:
    void say();
};

#endif // TST_HELLO_H
