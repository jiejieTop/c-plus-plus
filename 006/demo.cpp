/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2020-03-21 15:55:37
 * @LastEditTime: 2020-03-28 04:00:29
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */

#include <string>
#include <cstring>
#include <iostream>
#include <vector>

typedef struct demo {
    int a;
    double b;
    char c[20];
} demo_t;

int main(void)
{
    using namespace std;
    int num = 100;
    int & test = num;
    
    std::cout << "num = " << num << std::endl;
    std::cout << "test = " << test << std::endl;

    num++;
    std::cout << "---------- num++ ----------" << std::endl;

    std::cout << "num = " << num << std::endl;
    std::cout << "test = " << test << std::endl;

    test++;
    std::cout << "---------- test++ ----------" << std::endl;

    std::cout << "num = " << num << std::endl;
    std::cout << "test = " << test << std::endl;

    std::cout << "num addr = " << &num << std::endl;
    std::cout << "test addr = " << &test << std::endl;

    return 0;
}
