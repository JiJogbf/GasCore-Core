#include "utils.hpp"

#include <cassert>
#include <iostream>

namespace gas{
    void todo(char_cp text){
        std::cout <<"TODO: "<< text << std::endl;
        assert(false);
    }
}
