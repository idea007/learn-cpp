#include <iostream>
#include "macro.h"
#include <openssl/bio.h>
#include <openssl/evp.h>
#include <openssl/buffer.h>

void testFunction(int value)
{
    // 使用 SYLAR_ASSERT 进行断言检查
    SYLAR_ASSERT(value > 0);

    // 使用 SYLAR_ASSERT2 进行断言检查，并附加错误信息
    SYLAR_ASSERT2(value != 42, "Value should not be 42");

    std::cout << "Value is valid: " << value << std::endl;
}

int main()
{

    testFunction(10); // 正常情况
    testFunction(-1); // 触发 SYLAR_ASSERT 断言
    testFunction(42); // 触发 SYLAR_ASSERT2 断言

    return 0;
}