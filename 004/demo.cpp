/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2020-03-21 15:55:37
 * @LastEditTime: 2020-03-26 03:19:21
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */

#include <string>
#include <cstring>
#include <iostream>

typedef struct demo {
    int a;
    double b;
    char c[20];
} demo_t;

int main(void)
{
    using namespace std;
    demo_t * p_demo = new demo;

    p_demo->a = 1;
    p_demo->b = 2.3;
    strncpy(p_demo->c, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 19);
    p_demo->c[19] = '\0';

    std::cout << "p_demo->a = " << p_demo->a << std::endl;
    std::cout << "p_demo->b = " << p_demo->b << std::endl;
    std::cout << "p_demo->c = " << p_demo->c << std::endl;

    delete p_demo;

    return 0;
}
