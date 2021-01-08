#pragma once 

#include <gas\test\TestCase.hpp>
#include <gas\test\Logger.hpp>

namespace gas{
namespace test{

class MockTestCase: public gas::test::TestCase{
public:
    MockTestCase(Logger* logger);
    ~MockTestCase() override;
    void execute() override;
};


}
}

