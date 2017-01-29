#include "tst_hello.h"

void TST_Hello::say()
{
    QVERIFY2(Hello(0).say() == "", "Vazio");
    QVERIFY2(Hello(1).say() == "Hello", "Deve exibir Hello");
    QVERIFY2(Hello(2).say() == "Hello ", "Deve exibir Hello ");
    QVERIFY2(Hello(3).say() == "Hello World", "Deve exibir Hello World");
    QVERIFY2(Hello(4).say() == "Hello World!!!", "Deve exibir Hello World!!!");
}
