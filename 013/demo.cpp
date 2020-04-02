/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2020-03-21 15:55:37
 * @LastEditTime: 2020-04-02 02:14:20
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
    int length, width;
public:
    class_a(void);
    class_a(int _length, int _width);
    ~class_a();
    int area(void);
    int perimeter(void);
    void init(int, int);
    void print_info(void);
};

class_a::class_a(void)
{
    length = 10;
    width = 10;
}

class_a::class_a(int _length, int _width):length(_length),width(_width)
{
};

class_a::~class_a()
{
}

int class_a::area(void)
{
    return this->length * this->width;
}

int class_a::perimeter(void)
{
    return 2 * (this->length + this->width);
}

void class_a::init(int _length, int _width)
{
    this->length = _length;
    this->width = _width;
}

void class_a::print_info(void)
{
    std::cout << "class_a::length = " << this->length << std::endl;
    std::cout << "class_a::width = " << this->width << std::endl;
}


class class_b : public class_a
{
private:
    /* data */
    int high;
public:
    class_b(void);
    class_b(int _length, int _width, int _high);
    ~class_b();
    int volume(void);
    void print_info(void);
};


class_b::class_b(void)
{
    high = 10;
    this->init(10, 10);
}

// class_b::class_b(int _length, int _width, int _high)
// {
//     high = _high;
//     this->init(_length, _width);        //cannot access private variables
// };

class_b::class_b(int _length, int _width, int _high) : class_a(_length, _width) , high(_high)
{
};

class_b::~class_b()
{
}

int class_b::volume(void)
{
    return high * this->area();
}

void class_b::print_info(void)
{
    class_a::print_info();
    // this->print_info();  // error
    std::cout << "class_b::high = " << this->high << std::endl;
}


int main(void)
{
    using namespace std;

    class_b b(10, 20, 30);
    b.print_info();

    std::cout << "area = " << b.area() << std::endl;
    std::cout << "perimeter = " << b.perimeter() << std::endl;
    std::cout << "volume = " << b.volume() << std::endl;

    return 0;
}
