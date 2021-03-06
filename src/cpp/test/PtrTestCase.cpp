#include "PtrTestCase.hpp"

#include <gas\Ptr.hpp>
#include "Mock.hpp"

namespace gas{
namespace test{

PtrTestCase::PtrTestCase(Logger* logger): RichTestCase("PtrTestCase", logger){}

void PtrTestCase::execute(){
    gas::Ptr<Mock> ptr(new Mock(12));
    gas::Ptr<Mock> newPtr = ptr;
    RichTestCase::execute();
}


}
}