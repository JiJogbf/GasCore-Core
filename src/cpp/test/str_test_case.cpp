#include "str_test_case.hpp"

#include <string>

// #include <cassert>
#include <exception>
#include <gas\test\TestCase.hpp>
#include <gas\test\Logger.hpp>

#include <gas\str\str.hpp>

namespace gas{
namespace test{

StrTestCase::StrTestCase(Logger* logger):
    RichTestCase("StrTest", logger)
{}

void StrTestCase::execute(){
    bool failed = false;
    try{
        {
            gas::str::Str s = "Hello world";    
            mLogger->print(s);
        }

        {
            gas::str::Str* s = new gas::str::Str("Heap Hello world") ;    
            mLogger->print(*s);
            delete s;
        }
       
        mLogger->print("All objects destroyed");
    }catch(std::exception& e){
        mLogger->print("Exception captured!");
        failed = true;
    }
    
    if(failed)
        fail();
    else
        pass();

    RichTestCase::execute();
}

}
}
