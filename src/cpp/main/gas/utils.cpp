#include "utils.hpp"

#include <cassert>
#include <iostream>

namespace gas{
    void todo(char_cp text){
        std::cout <<"TODO: "<< text << std::endl;
        assert(false);
    }

    int int_abs(int value){
        if(value >= 0){
            return value;
        }else{
            return -value;
        }
    }
}
