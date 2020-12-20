#pragma once

#include "..\types.hpp"
#include "String.hpp"

namespace gas{
    namespace str{
        class Text: public String{
        protected:
            char_p mBuffer;
            int    mLen;
        public:
            Text(char_cp source);
            Text(const Text& source);
            virtual ~Text();        
            operator char_p() const;
            Text& operator=(const Text& source);
            virtual int length()const;
            virtual char_p content() const;
        };
    }
}