#include <iostream>

int main(int, char**){
    std::cout << "Hello, from lab-input-select-env!\n";

    // 命令行提示输入 1,2,3,4 进行选择
    std::cout << "Please select an option (1, 2, 3, 4): ";
    int option;
    std::cin >> option;
    // 根据输入的选项执行不同的操作
    switch (option) {
        case 1:
            std::cout << "You selected option 1.\n";
            break;
        case 2:
            std::cout << "You selected option 2.\n";
            break;
        case 3:
            std::cout << "You selected option 3.\n";
            break;
        case 4:
            std::cout << "You selected option 4.\n";
            break;
        default:
            std::cout << "Invalid option. Please select a valid option (1, 2, 3, 4).\n";
            break;
    }

    // 结束程序
    std::cout << "Exiting program.\n";
    return 0;
}
