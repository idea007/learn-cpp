#include <iostream>
#include "mutex.h"

void semaphore_example() {
    sylar::Semaphore sem(10);

    std::thread t1([&sem]() {
        std::cout << "Thread 1 waiting..." << std::endl;
        sem.wait();
        std::cout << "Thread 1 acquired semaphore" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        sem.notify();
        std::cout << "Thread 1 released semaphore" << std::endl;
    });

    std::thread t2([&sem]() {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "Thread 2 waiting..." << std::endl;
        sem.wait();
        std::cout << "Thread 2 acquired semaphore" << std::endl;
        sem.notify();
        std::cout << "Thread 2 released semaphore" << std::endl;
    });

    t1.join();
    t2.join();
}

int main() {
    semaphore_example();
    return 0;
}