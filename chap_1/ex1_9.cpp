//
// Created by qiwen on 12/8/21.
//
#include <iostream>

int main(){
    int a = 50;
    int sum = 0;
    while(a<=100){
        sum += a;
        ++a;
    }
    std::cout << sum <<std::endl;
}

