#include "TestCaseDecorator.hpp"

namespace gas{
namespace test{

TestCaseDecorator::TestCaseDecorator(TestCase* origin, Logger* logger): 
    TestCase(logger), mOrigin(origin)
{}

TestCaseDecorator::~TestCaseDecorator(){
    delete mOrigin;
}

void TestCaseDecorator::execute(){
    mOrigin->execute();
}


}
}