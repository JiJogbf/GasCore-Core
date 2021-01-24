#pragma once

#include <gas\test\Logger.hpp>
#include <gas\test\RichTestCase.hpp>

namespace gas{
    namespace test{
        class StrTestCase: public RichTestCase{
        public:
            StrTestCase(Logger* logger);
            void execute() override;       
        public:
            bool editing();
        };
    }
}