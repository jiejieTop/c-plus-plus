/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2020-03-21 15:55:37
 * @LastEditTime: 2020-04-01 00:45:32
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
    int width, high;
public:
    class_a(int _w, int _h);
    ~class_a();
    void print_info(void);
};

class class_b
{
private:
    /* data */
    int number;
    class_a test_a;
public:
    class_b(int _b, int _w, int _h);
    ~class_b();
    void print_info(void);
};


class_a::class_a(int _w, int _h):width(_w),high(_h)
{
};

class_a::~class_a()
{
};


class_b::class_b(int _b, int _w, int _h):number(_b), test_a(_w, _h)
{
};


class_b::~class_b()
{
};


void class_a::print_info(void)
{
    std::cout << "class_a::width = " << this->width << std::endl;
    std::cout << "class_a::high = " << this->high << std::endl;
}

void class_b::print_info(void)
{
    std::cout << "class_b::number = " <<  this->number << std::endl;
    this->test_a.print_info();
}

int main(void)
{
    using namespace std;

    class_b r2(20, 13, 14);

    r2.print_info();

    return 0;
}