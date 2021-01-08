#pragma once 

#include <gas\test\TestCase.hpp>
#include <gas\test\Logger.hpp>

namespace gas{
namespace test{

class ArrayListTestCase: public gas::test::TestCase{
public:
    ArrayListTestCase(Logger* logger);
    void execute() override;
};

}
}
