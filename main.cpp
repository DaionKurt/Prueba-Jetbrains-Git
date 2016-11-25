#include <iostream>
#include "addons.h"

auto suma(int a,int b)->int {return a+b;}

int main() {
    std::cout<<"Hello, World!"<<std::endl;
    std::cout<<"Hello "<<std::endl;
    print(suma(5,6));
    return 0;
}