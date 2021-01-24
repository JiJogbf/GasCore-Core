#pragma once 

#include "..\types.hpp"
#include "..\Object.hpp"

namespace gas{
namespace str{

class Str;

class StrEditor: public Object{
private:
    char_p buffer;
    int    cap;
public:
    StrEditor(char_p buffer, int cap);
    ~StrEditor();  
public:
    StrEditor& append(char_cp s);
    StrEditor& pack();
    StrEditor& capacity(int new_cap);
    StrEditor& reserve(int new_cap);
    Str        commit();
};

}
}