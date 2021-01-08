#include "SafeTestCase.hpp"

#include <exception>
#include <string>

namespace gas{
namespace test{

SafeTestCase::SafeTestCase(TestCase* origin, Logger* logger):
    TestCaseDecorator(origin, logger)
{}

SafeTestCase::~SafeTestCase(){}

void SafeTestCase::execute(){
    try{
        TestCaseDecorator::execute();
    }catch(std::exception& e){
        mLogger->print(std::string(e.what()));
        mLogger->print("failed");
    }catch(...){
        mLogger->print("failed");
    }
}

}
}
