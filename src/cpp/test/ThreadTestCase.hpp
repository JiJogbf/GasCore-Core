#pragma once 

#include <gas\test\TestCase.hpp>
#include <gas\test\Logger.hpp>

namespace gas{
namespace test{
  

class ThreadTestCase: public gas::test::TestCase{
public:
    ThreadTestCase(Logger* logger);
    ~ThreadTestCase() override;
    void execute() override;
};

}
}

