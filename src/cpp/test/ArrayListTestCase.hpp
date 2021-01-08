#pragma once 

#include <gas\test\RichTestCase.hpp>
#include <gas\test\Logger.hpp>

namespace gas{
namespace test{

class ArrayListTestCase: public gas::test::RichTestCase{
public:
    ArrayListTestCase(Logger* logger);
    void execute() override;
};

}
}
