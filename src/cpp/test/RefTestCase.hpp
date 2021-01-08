#pragma once 

#include <gas\test\RichTestCase.hpp>
#include <gas\test\Logger.hpp>

namespace gas{
namespace test{

class RefTestCase: public gas::test::RichTestCase{
public:
    RefTestCase(Logger* logger);
    void execute() override;
};

}
}

