#include <iostream>
#include <iomanip>
#include <sstream>



void test_o(){
    // 获取纪元时间，起始时间
    time_t now = time(0);
    // 转换为字符串形式
    char* dt = ctime(&now);
    std::cout << "The local date and time is: " << dt << std::endl;
}

void test_now(){
  // 获取纪元时间
    time_t now = time(0);
    // 转换为字符串形式
    char* dt = ctime(&now);
    std::ostringstream oss;
    oss << std::put_time(localtime(&now), "%Y-%m-%d");
    std::string formatData = oss.str();

    std::cout << "The local date and time is: " << formatData << std::endl;

}

int main()
{
  
    test_o();

    return 0;
}