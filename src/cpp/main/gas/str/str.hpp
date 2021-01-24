#pragma once

#include "..\types.hpp"
#include "..\Object.hpp"

namespace gas{
namespace str{

class Str: public Object{
private:
    char_p buffer;
    int    cap;
public:
    Str(char_cp s);
    ~Str();
    operator char_cp() const;
    Str& operator=(const Str& source);
    // operator=(const Str& str)
    // operator +=(const Str& str) 
};

}
}