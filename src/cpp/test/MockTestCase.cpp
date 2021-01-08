#include "MockTestCase.hpp"

#include <cassert>

namespace gas{
namespace test{

MockTestCase::MockTestCase(Logger* logger): RichTestCase("MockTestCase", logger){}

void MockTestCase::execute(){
    RichTestCase::execute();
}

}
}

