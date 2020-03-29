/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2020-03-21 15:55:37
 * @LastEditTime: 2020-03-29 13:48:58
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
    std::cout << "/* this is a massage */" << std::endl;
    w = 10;
    h = 10;
}

frist_class::~frist_class()
{
}

int frist_class::area(void)
{
    return w * h;
}

int frist_class::perimeter(void)
{
    return 2 * (w + h);
}

void frist_class::init(int _w, int _h)
{
    w = _w;
    h = _h;
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