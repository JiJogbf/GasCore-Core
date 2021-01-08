#include "RefTestCase.hpp"

#include "Mock.hpp"

#include <gas\Ref.hpp>

namespace gas{
namespace test{

RefTestCase::RefTestCase(Logger* logger): RichTestCase("RefTestCase", logger){}

void RefTestCase::execute(){
    Mock mock(228);
    gas::Ref<Mock> m(mock);
    RichTestCase::execute();
}

}
}
