#pragma once 

#include <gas\test\TestCase.hpp>
#include <gas\test\Logger.hpp>

namespace gas{
namespace test{

class TextTestCase: public gas::test::TestCase{
public:
    TextTestCase(Logger* logger);
    void execute() override;
};

}
}
