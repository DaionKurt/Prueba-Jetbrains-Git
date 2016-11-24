//
// Created by Carlos A. Fernández on 24/11/2016.
// addons.h on 11:20 AM 
// Copyright (c) 2016 TK team. All rights reserved.
//

#ifndef PRUEBAGIT_ADDONS_H
#define PRUEBAGIT_ADDONS_H

template <typename T>
void print(T print,bool is_endl=0){
    std::cout<<print;
    if(is_endl) std::cout<<std::endl;
}

#endif //PRUEBAGIT_ADDONS_H
