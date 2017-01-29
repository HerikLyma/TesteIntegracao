#ifndef HELLO_H
#define HELLO_H

#include <string>

class Hello
{
    int i;
public:
    explicit Hello(int i);   

    std::string say() const;
};

#endif // HELLO_H
