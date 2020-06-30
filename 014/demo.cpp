/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2020-03-21 15:55:37
 * @LastEditTime: 2020-06-30 11:49:19
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */

#include <iostream>

class Father {
public:
    Father(void) {};
    ~Father() {};
    
    virtual void Say() {
        std::cout << "father say hello!" << std::endl;
    };
};

class Son : public Father {
public:
    Son(void) {};
    ~Son() {};
    
    void Say(void) {
        std::cout << "son say hello!" << std::endl;
    };
};

int main(void)
{
    using namespace std;

    Father father;
    Son son;
    Father *father1 = &son;

    father.Say();
    son.Say();

    father1->Say();
}
