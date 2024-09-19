#include <iostream>
#include <iostream>
#include <chrono>
#include <ctime>
#include <thread>

void task()
{
    std::cout << "任务执行" << std::endl;
    // 在这里添加你的任务代码
}

void startHourlyTask()
{
    // 获取当前时间
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::tm *now_tm = std::localtime(&now_c);

    // 计算到下一个整点的时间间隔
    now_tm->tm_min = 13;
    now_tm->tm_sec = 0;
    now_tm->tm_hour = now_tm->tm_hour;
    std::cout << "hour:"<< now_tm->tm_hour << " min:" << now_tm->tm_min << " sec:" << now_tm->tm_sec << std::endl;
    auto nextHour = std::chrono::system_clock::from_time_t(std::mktime(now_tm));

    auto duration = nextHour - now;
    
    std::this_thread::sleep_for(duration);

    // 执行任务
    task();
}

int main()
{
    std::thread timerThread(startHourlyTask);
    timerThread.detach();

    std::cout << "hhh" << std::endl;

    // 主线程的其他工作
    while (true)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}