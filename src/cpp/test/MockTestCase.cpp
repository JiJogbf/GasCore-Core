#include "MockTestCase.hpp"

#include <cassert>

namespace gas{
namespace test{

MockTestCase::MockTestCase(Logger* logger): TestCase(logger){}

MockTestCase::~MockTestCase(){}

void MockTestCase::execute(){
    mLogger->print("MockTestCase: pass");
}

}
}

