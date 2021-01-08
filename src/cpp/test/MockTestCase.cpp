#include "MockTestCase.hpp"

namespace gas{
namespace test{

MockTestCase::MockTestCase(Logger* logger): TestCase(logger){}

MockTestCase::~MockTestCase(){}

void MockTestCase::execute(){
    mLogger->print("MockTestCase.execute()");
}

}
}

