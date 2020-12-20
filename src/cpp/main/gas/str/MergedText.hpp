#pragma once

#include "String.hpp"

namespace gas{
    namespace str{
        class MergedText: public String{
        private: 
            // gas::coll::Array<Ptr<String>> mItems;
        public:
            MergedText(/*items*/);
            ~MergedText() override;
            int length() const override;
            char_p content() const override;
        };
    }
}
