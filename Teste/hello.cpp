#include "hello.h"

Hello::Hello(int i) : i(i)
{
}


std::string Hello::say() const
{
    if(i == 0)
        return "";
    else if(i == 1)
        return "Hello";
    else if(i == 2)
        return "Hello ";
    else if(i == 3)
        return "Hello World";
    else if(i == 4)
        return "Hello World!!!";
}
