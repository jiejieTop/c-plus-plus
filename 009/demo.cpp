/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2020-03-21 15:55:37
 * @LastEditTime: 2020-03-31 22:24:11
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */

#include <string>
#include <cstring>
#include <iostream>
#include <vector>

class frist_class
{
private:
    /* data */
    int w, h;
public:
    frist_class(void);
    ~frist_class();
    int area(void);
    int perimeter(void);
    void init(int, int);
};

frist_class::frist_class(void)
{
    std::cout << "structure..." << std::endl;
    w = 10;
    h = 10;
}

frist_class::~frist_class()
{
    std::cout << "destruct..." << std::endl;
}

int frist_class::area(void)
{
    return this->w * this->h;
}

int frist_class::perimeter(void)
{
    return 2 * (this->w + this->h);
}

void frist_class::init(int _w, int _h)
{
    this->w = _w;
    this->h = _h;
}

int main(void)
{
    using namespace std;

    frist_class r;

    int w = 10;
    int h = 5;

    r.init(w, h);

    std::cout << "area = " << r.area() << std::endl;
    std::cout << "perimeter = " << r.perimeter() << std::endl;

    return 0;
}