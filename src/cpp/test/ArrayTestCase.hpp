#pragma once

#include <gas\test\Logger.hpp>
#include <gas\test\RichTestCase.hpp>

namespace gas{
    namespace test{
        class ArrayTestCase: public RichTestCase{
        public:
            ArrayTestCase(Logger* logger);
            void execute() override;
        public:
            void creatingArrayStaticaly();
            void appendingElementsToArray();
            void appendingRangeElements();
        };
    }
}