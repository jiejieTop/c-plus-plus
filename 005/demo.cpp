/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2020-03-21 15:55:37
 * @LastEditTime: 2020-03-26 06:19:19
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */

#include <string>
#include <cstring>
#include <iostream>
#include <vector>

typedef struct demo {
    int a;
    double b;
    char c[20];
} demo_t;

int main(void)
{
    using namespace std;

    vector<int>vec;
    vector<int>::iterator it;
    
    vec.push_back(100);
    vec.push_back(120);
    vec.insert(vec.begin() + 1, 110);

    for (it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << std::endl;
    
    std::cout << vec.size() << std::endl;

    vec.clear();

    return 0;
}
