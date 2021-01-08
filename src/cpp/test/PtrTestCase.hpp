#pragma once 

#include <gas\test\TestCase.hpp>
#include <gas\test\Logger.hpp>

namespace gas{
namespace test{

class PtrTestCase: public gas::test::TestCase{
public:
    PtrTestCase(Logger* logger);
    void execute() override;
};

}
}
