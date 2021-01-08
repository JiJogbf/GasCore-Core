#pragma once 

#include <gas\test\RichTestCase.hpp>
#include <gas\test\Logger.hpp>

namespace gas{
namespace test{
  
class ThreadTestCase: public gas::test::RichTestCase{
public:
    ThreadTestCase(Logger* logger);
    void execute() override;
};

}
}

