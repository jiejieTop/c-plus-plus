/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2020-03-21 15:55:37
 * @LastEditTime: 2020-03-26 00:58:15
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */

#include <iostream>
#include <cstring>
#include <string>

int main(void)
{
    using namespace std;
    
    int *age = new int;
    int *p_arr = new int[10];
    char *my_name = new char[20];
    char *your_name = new char[20];

    *age = 23;
    for (int i = 0; i < 10; i++) {
        p_arr[i] = i + *age;
        std::cout << "parr[" << i << "] = " << p_arr[i] << std::endl;
    }

    strcpy(my_name, "jiejie");
    
    std::cout << "this is a new test c plus plus demo!" << std::endl;

    std::cout << "please input your name: "; 
    std::cin >> your_name;
    std::cout << "hello, "<< your_name << ", my name is "<< my_name << ", age is " << *age << std::endl;

    // delete
    delete age;
    delete [] p_arr;
    delete [] my_name;
    delete [] your_name;

    std::cout << "delete ..." << std::endl;

    return 0;
}
