/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2020-03-21 15:55:37
 * @LastEditTime: 2020-04-01 22:55:09
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */

#include <string>
#include <cstring>
#include <iostream>
#include <vector>


class class_a
{
private:
    /* data */
public:
    int width, high;
    class_a();
    class_a(int _w, int _h);
    ~class_a();
    class_a operator - (const class_a & c);
    void print_info(void);
};

class_a::class_a()
{
};

class_a::class_a(int _w, int _h):width(_w),high(_h)
{
};

class_a::~class_a()
{
};

class_a class_a::operator - (const class_a & c)
{
    return class_a(this->width - c.width, this->high - c.high);
}

class_a operator + (const class_a & a, const class_a & b)
{
    return class_a(a.width + b.width, a.high + b.high);
}



void class_a::print_info(void)
{
    std::cout << "class_a::width = " << this->width << std::endl;
    std::cout << "class_a::high = " << this->high << std::endl;
}


int main(void)
{
    using namespace std;

    class_a a(10, 10);
    class_a b(5, 5);
    class_a c;

    c = a - b;

    c.print_info();

    c = b + a;

    c.print_info();

    return 0;
}