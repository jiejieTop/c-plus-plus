/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2020-03-21 15:55:37
 * @LastEditTime: 2020-03-28 10:00:28
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */

#include <string>
#include <cstring>
#include <iostream>
#include <vector>

//交换 int 变量的值
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//交换 float 变量的值
void swap(float *a, float *b)
{
    float temp = *a;
    *a = *b;
    *b = temp;
}

//交换 char 变量的值
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

//交换 bool 变量的值
void swap(bool *a, bool *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    using namespace std;
    //交换 int 变量的值
    int n1 = 100, n2 = 200;
    swap(&n1, &n2);
    std::cout << n1 << ", " << n2 << std::endl;
   
    //交换 float 变量的值
    float f1 = 12.5, f2 = 56.93;
    swap(&f1, &f2);
    std::cout << f1 << ", " << f2 << std::endl;
   
    //交换 char 变量的值
    char c1 = 'A', c2 = 'B';
    swap(&c1, &c2);
    std::cout << c1 << ", " << c2 << std::endl;
   
    //交换 bool 变量的值
    bool b1 = false, b2 = true;
    swap(&b1, &b2);
    std::cout << b1 << ", " << b2 << std::endl;
    return 0;
}