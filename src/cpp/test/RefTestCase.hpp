#pragma once 

#include <gas\test\TestCase.hpp>
#include <gas\test\Logger.hpp>

namespace gas{
namespace test{

class RefTestCase: public gas::test::TestCase{
public:
    RefTestCase(Logger* logger);
    ~RefTestCase() override;
    void execute() override;
};

}
}

