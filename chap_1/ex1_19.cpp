//
// Created by qiwen on 12/8/21.
//
#include <iostream>

int main(){
    int a, b;
    std::cout << "Please type two integers:" << std::endl;
    std::cin >> a >> b;

    int i=a;
    if (a < b){
        while (i <= b){
            std::cout << i << std::endl;
            ++i;
        }
    }
    else {
        std::cout << "Please make sure the 1st number is smaller!" << std::endl;
    }
}

