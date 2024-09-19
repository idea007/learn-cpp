#include <iostream>

#include "include/log.h"




int main()
{
    static sylar::Logger::ptr g_logger = SYLAR_LOG_NAME("test");

    SYLAR_LOG_DEBUG(g_logger) << "hello sylar log";

    return 0;
}