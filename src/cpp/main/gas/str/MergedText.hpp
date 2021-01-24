#pragma once

#include "String.hpp"

namespace gas{
    namespace str{
        class MergedText: public String{
        public:
            MergedText();
            ~MergedText() override;
            virtual MergedText* add(String* s);
            int length() const override;
            char_p content() const override;
        };
    }
}
