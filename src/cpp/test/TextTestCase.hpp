#pragma once 

#include <gas\test\RichTestCase.hpp>
#include <gas\test\Logger.hpp>

namespace gas{
namespace test{

class TextTestCase: public gas::test::RichTestCase{
private:
    void textLengthHasExpectedValue();
    void contentOfTextIsEqualToPassed();
public:
    TextTestCase(Logger* logger);
    void execute() override;
};

}
}
