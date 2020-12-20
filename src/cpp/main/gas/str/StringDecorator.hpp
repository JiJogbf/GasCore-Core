#pragma once

#include "String.hpp"

namespace gas{
    namespace str{
        class StringDecorator: public String{
        protected:
            String* mOrigin;
        public:
            StringDecorator(String* origin);
            ~StringDecorator() override;
            int length() const override;
            char_p content() const override;
        };
    }
}
