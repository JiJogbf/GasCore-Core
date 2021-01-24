#pragma once

#include "..\types.hpp"
#include "..\Object.hpp"

#include <string>

namespace gas{
namespace str{

class Str: public Object{
private:
    char_p buffer;
    int    cap;
public:
    Str(char_cp s);
    Str(const std::string& source);
    ~Str();
    operator char_cp() const;
    operator std::string() const;
    Str& operator=(const Str& source);
    // operator=(const Str& str)
    // operator +=(const Str& str) 
};

}
}