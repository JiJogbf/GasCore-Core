#ifndef GAS_STR_STRING_HPP_13122020
#define GAS_STR_STRING_HPP_13122020

#include "..\types.hpp"
#include "..\Object.hpp"

namespace gas{
    namespace str{
        class String: public gas::Object{
        protected:
            char_p mBuffer;
            int    mLen;
        public:
            String(char_cp source);
            String(const String& source);
            ~String();        
            operator char_p() const;
            String& operator=(const String& source);
            int length()const;
            // String operator+(const String& right);
            // Utf8String oeprator+=(const Utf8String& str);
            // const Utf8String& operator=(const Utf8String& source)const;
            // copy
            // concatinations
            // manipulations
        };
    }
}

#endif 
