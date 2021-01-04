#include "TestCase.hpp"

namespace gas{
namespace test{

TestCase::TestCase(Logger* logger): mLogger(logger){}

TestCase::~TestCase(){
    mLogger = nullptr;
}

}
}