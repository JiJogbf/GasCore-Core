#include "ArrayListTestCase.hpp"

#include <cassert>

#include <gas\test\TestCase.hpp>
#include <gas\test\Logger.hpp>

#include <gas\coll\ArrayList.hpp>
#include <gas\str\Text.hpp>

namespace gas{
namespace test{

ArrayListTestCase::ArrayListTestCase(Logger* logger):
    TestCase(logger)
{}

void ArrayListTestCase::execute(){
    gas::coll::ArrayList<gas::str::Text> list(4);
    list.add(new gas::str::Text("hello"));
    list.add(new gas::str::Text("world"));

    assert(list.count() == 2 && "ArrayListTestCase: size has unexpected value!!");

    for(int i = 0; i < list.count(); i++){
        gas::str::Text* p = list.get(i);
        assert(p != nullptr);
    }

    mLogger->print("ArrayListTestCase: pass");
}


}
}
