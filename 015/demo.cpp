/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2020-03-21 15:55:37
 * @LastEditTime: 2020-06-30 11:34:43
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */

#include <iostream>

class Base {
public:
    Base(void) {};
    ~Base() {};

    void func() { 
        std::cout << "Base func()" << std::endl;
    };
    void func(int a) {
        std::cout << "Base func(int a)" << std::endl;
    };
};

class Subclass : public Base {
public:
    Subclass(void) {};
    ~Subclass() {};

    using Base::func;
    void func(std::string s) { 
        std::cout << "Subclass func(string s)" << std::endl;
    };
};

int main(void)
{
    Base base;
    Subclass sub;
    
    sub.func();
    sub.func(2);
    sub.func("666");

    return 0;
}


