/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2020-03-21 15:55:37
 * @LastEditTime: 2020-03-22 22:01:31
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */

#include <iostream>

int main(void)
{
    char my_name[] = "jiejie";
    int age = 23;
    char your_name[20];
    using namespace std;
    std::cout << "this is my frist c plus plus demo!" << std::endl;
    std::cout << "hello world!" << std::endl;
    std::cout << "please input your name："; 
    std::cin >> your_name;
    std::cout << "hello, "<< your_name << ", my name is "<< my_name << ", age is " << age << std::endl;
    return 0;
}
