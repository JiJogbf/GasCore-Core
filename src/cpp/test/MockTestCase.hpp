#pragma once 

#include <gas\test\RichTestCase.hpp>
#include <gas\test\Logger.hpp>

namespace gas{
namespace test{

class MockTestCase: public gas::test::RichTestCase{
public:
    MockTestCase(Logger* logger);
    void execute() override;
};


}
}

