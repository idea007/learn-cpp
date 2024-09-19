#include <iostream>

/**
 *
 * 1. 局部静态变量：在 GetInstance 方法中使用 static Singleton01 instance; 确保实例只创建一次，并且是线程安全的。
 * 2. 删除拷贝构造函数和赋值运算符：防止拷贝实例，确保单例的唯一性。
 * 3. 私有构造函数和析构函数：确保外部无法直接创建或销毁实例。
 */
class Singleton01
{
public:
    // 获取单例实例的引用
    static Singleton01 &GetInstance()
    {
        static Singleton01 instance;
        return instance;
    }

    // 删除拷贝构造函数和赋值运算符，防止拷贝实例
    Singleton01(const Singleton01 &) = delete;
    Singleton01 &operator=(const Singleton01 &) = delete;

    void Display()
    {
        std::cout << "Singleton01 instance: " << this << std::endl;
    }

private:
    // 私有构造函数和析构函数
    Singleton01() {}
    ~Singleton01() {}
};