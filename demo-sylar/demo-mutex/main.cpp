#include <iostream>
#include "mutex.h"
#include <thread>
#include <vector>

sylar::Mutex mutex;
int shared_data = 0;

void increment(int id)
{
    for (int i = 0; i < 100; ++i)
    {
        sylar::Mutex::Lock lock(mutex); // 使用 ScopedLockImpl 自动管理锁的获取和释放
        ++shared_data;
        std::cout << "Thread " << id << " incremented shared_data to " << shared_data << std::endl;
    }
}

int main()
{

    std::vector<std::thread> threads;

    // 创建多个线程
    for (int i = 0; i < 10; ++i)
    {
        threads.push_back(std::thread(increment, i));
    }

    // 等待所有线程完成
    for (auto &th : threads)
    {
        th.join();
    }

    std::cout << "Final value of shared_data: " << shared_data << std::endl;
    return 0;
}