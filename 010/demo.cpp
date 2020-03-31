/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2020-03-21 15:55:37
 * @LastEditTime: 2020-03-31 23:23:39
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
    static int total_num;
    static int total_area;
    static int total_perimeter;
public:
    frist_class(void);
    frist_class(int _w, int _h);
    frist_class(frist_class & r);
    ~frist_class();
    void init(int, int);
    static void print_info(void);
};

int frist_class::total_num = 0;
int frist_class::total_area = 0;
int frist_class::total_perimeter = 0;

frist_class::frist_class()
{
    total_num ++;
}

frist_class::frist_class(int _w, int _h)
{
    this->init(_w, _h);
    total_num ++;
}

frist_class::~frist_class()
{
    total_num--;
}

// 手动编写复制构造函数
frist_class::frist_class(frist_class & r)
{
    w = r.w;
    h = r.h;

    frist_class::total_num ++;
    frist_class::total_area += w * h;
    frist_class::total_perimeter += (2 * (this->w + this->h));
}

void frist_class::init(int _w, int _h)
{
    this->w = _w;
    this->h = _h;
    total_area += w * h;
    total_perimeter += (2 * (this->w + this->h));
}

void frist_class::print_info(void)
{
    std::cout << "total_num = " << total_num << std::endl;
    std::cout << "total_area = " << total_area << std::endl;
    std::cout << "total_perimeter = " << total_perimeter << std::endl;
}



int main(void)
{
    using namespace std;

    frist_class r1, r2;
    frist_class r3(15, 15);

    int w = 10;
    int h = 5;

    r1.init(w, h);
    r2.init(w + 10, h + 12);

    frist_class r4(r1);

    frist_class::print_info();

    return 0;
}