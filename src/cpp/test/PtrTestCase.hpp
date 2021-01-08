#pragma once 

#include <gas\test\RichTestCase.hpp>
#include <gas\test\Logger.hpp>

namespace gas{
namespace test{

class PtrTestCase: public gas::test::RichTestCase{
public:
    PtrTestCase(Logger* logger);
    void execute() override;
};

}
}
