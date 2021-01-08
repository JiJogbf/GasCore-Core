
#include "Mock.hpp"

#include <iostream>

Mock::Mock(int data): data(data){
    std::cout << "Mock()" << std::endl;
}

Mock::~Mock(){
    std::cout << "~Mock()" << std::endl;
}