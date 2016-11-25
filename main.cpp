#include <iostream>
#include "addons.h"

auto func(int a,int b)->int {return a+b;}

int main() {
    std::cout<<"Hello, World!"<<std::endl;
    std::cout<<"Hello "<<std::endl;
    print(func(5,6));
    return 0;
}