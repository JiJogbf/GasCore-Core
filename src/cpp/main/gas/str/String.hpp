#ifndef GAS_STR_STRING_HPP_13122020
#define GAS_STR_STRING_HPP_13122020

#include "..\types.hpp"
#include "..\Object.hpp"

namespace gas{
    namespace str{
        class String: public gas::Object{
        public:
            virtual ~String();        
            virtual int length() const = 0;
            virtual char_p content() const = 0;
        };
    }
}

#endif 
