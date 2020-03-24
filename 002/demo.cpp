/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2020-03-21 15:55:37
 * @LastEditTime: 2020-03-23 20:23:12
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */

#include <string>
#include <cstring>
#include <iostream>

int main(void)
{
    using namespace std;
    char my_name[] = "jiejie";
    int age = 23;
    char your_name[20];
    string str_name;
    
    std::cout << "this is my frist c plus plus demo!" << std::endl;
    std::cout << "hello world!" << std::endl;
    std::cout << "please input your name: "; 
    std::cin.get(your_name, sizeof(your_name)).get();
    std::cout << "your_name is " << your_name << ", strlen is " << strlen(your_name) << std::endl;

    std::cout << "please input your name: "; 
    std::cin >> str_name; 

    std::cout << "hello, "<< str_name << ", my name is "<< my_name << ", age is " << age << std::endl;
    return 0;
}
