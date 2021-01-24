#include "str_test_case.hpp"

#include <string>
#include <cstring>

// #include <cassert>
#include <exception>
#include <gas\test\TestCase.hpp>
#include <gas\test\Logger.hpp>

#include <gas\str\str.hpp>
#include <gas\str\str_editor.hpp>

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
            gas::str::Str* s = new gas::str::Str("Heap Hello world");
            mLogger->print(*s);
            delete s;
        }
       
        mLogger->print("All objects destroyed");
    }catch(std::exception& e){
        mLogger->print("Exception captured!");
        failed = true;
    }
   
    failed = editing();

    if(failed)
        fail();
    else
        pass();

    RichTestCase::execute();
}

static gas::str::StrEditor& wrap(gas::str::StrEditor* p, gas::str::StrEditor** dest){
    *dest = p;
    return *p;
}

bool StrTestCase::editing(){
    bool failed = false;
    gas::str::Str s = "test";
    if(s.size() != 4){
        mLogger->print("first size check has not expected values!");
        failed = true;
    }else if(strcmp(s.content(), "test") != 0){
        mLogger->print("first content check has not expected values!");
        failed = true;
    }else{
        gas::str::StrEditor* editor = nullptr;
        s = wrap(s.edit(), &editor)
            .capacity(128)
            .append(" first")
            .append(" second")
            .pack()
            .commit();
        delete editor;
        if(s.size() != 128){
            mLogger->print("second size check has not expected values!");
            failed = true;
        }else if(strcmp(s.content(), "test first second") != 0){
            mLogger->print("second content check has not expected values!");
            failed = true;
        }
    }
    return failed;
}


}
}
