#include "TextTestCase.hpp"

#include <string>
#include <cstring>
#include <gas\str\Text.hpp>

namespace gas{
namespace test{

TextTestCase::TextTestCase(Logger* logger): RichTestCase("TextTestCase", logger){}

void TextTestCase::textLengthHasExpectedValue(){
    gas::str::Text s = "hello world";
    if(s.length() != 11){
        mLogger->print("TextTestCase: textLengthHasExpectedValue: failed");
    }
}

void TextTestCase::contentOfTextIsEqualToPassed(){
    const char* cpp_s = "hello world"; 
    gas::str::Text s = "hello world";
    if(strcmp(s.content(), cpp_s) != 0){
        mLogger->print("TextTestCase: contentOfTextIsEqualToPassed: failed");
    }   
}

void TextTestCase::execute(){
    textLengthHasExpectedValue();
    contentOfTextIsEqualToPassed();
    RichTestCase::execute();
}

}
}