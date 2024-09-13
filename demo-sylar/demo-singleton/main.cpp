#include <iostream>

#include "include/singleton_01.h"



class MyClass
{
public:
    void Display()
    {
        std::cout << "MyClass instance: " << this << std::endl;
    }

    MyClass() {};
    ~MyClass() {};

private:
};

int main()
{

    // 获取单例实例并调用 Display 方法
    Singleton01 &instance = Singleton01::GetInstance();
    instance.Display();

    Singleton01 &instance1 = Singleton01::GetInstance();
    instance1.Display();

    return 0;
}