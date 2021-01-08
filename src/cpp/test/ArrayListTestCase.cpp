#include "ArrayListTestCase.hpp"

#include <cassert>

#include <gas\test\TestCase.hpp>
#include <gas\test\Logger.hpp>

#include <gas\coll\ArrayList.hpp>
#include <gas\str\Text.hpp>

namespace gas{
namespace test{

ArrayListTestCase::ArrayListTestCase(Logger* logger):
    RichTestCase("ArrayListTestCase", logger)
{}

void ArrayListTestCase::execute(){
    gas::coll::ArrayList<gas::str::Text> list(4);
    list.add(new gas::str::Text("hello"));
    list.add(new gas::str::Text("world"));
    if(list.count() != 2){
        fail();
    }else{
        pass();
    }
    RichTestCase::execute();
}


}
}
