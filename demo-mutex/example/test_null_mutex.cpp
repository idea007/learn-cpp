#include <iostream>

#include "mutex.h"

void exampleFunction()
{
    sylar::NullMutex nullMutex;
    sylar::NullMutex::Lock lock(nullMutex);

    // 在这里执行一些需要保护的代码
    std::cout << "This code is 'protected' by NullMutex." << std::endl;
}

int main()
{

    exampleFunction();
    return 0;
}