#include <QString>
#include <QtTest>
#include <hello.h>

class HelloTest : public QObject
{
    Q_OBJECT
private Q_SLOTS:
    void say()
    {
        QVERIFY2(Hello(0).say() == "", "Vazio");
        QVERIFY2(Hello(1).say() == "Hello", "Deve exibir Hello");
        QVERIFY2(Hello(2).say() == "Hello ", "Deve exibir Hello ");
        QVERIFY2(Hello(3).say() == "Hello World", "Deve exibir Hello World");
        //QVERIFY2(Hello(4).say() == "Hello World!!!", "Deve exibir Hello World!!!");
    }

};

QTEST_APPLESS_MAIN(HelloTest)

#include "tst_hello.moc"
