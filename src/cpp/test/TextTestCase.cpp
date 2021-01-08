#include "TextTestCase.hpp"

#include <string>
#include <gas\str\Text.hpp>

namespace gas{
namespace test{

TextTestCase::TextTestCase(Logger* logger): TestCase(logger){}

void TextTestCase::execute(){
    gas::str::Text s = "hello world";
    mLogger->print(std::string(s.content()));
    mLogger->print("TextTestCase: pass");
}

}
}