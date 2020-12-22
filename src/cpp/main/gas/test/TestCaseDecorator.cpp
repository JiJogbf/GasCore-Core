#include "TestCaseDecorator.hpp"

namespace gas{
namespace test{

TestCaseDecorator::TestCaseDecorator(TestCase* origin): 
    TestCase(), mOrigin(origin)
{}

TestCaseDecorator::~TestCaseDecorator(){
    delete mOrigin;
}

void TestCaseDecorator::execute(){
    mOrigin->execute();
}


}
}