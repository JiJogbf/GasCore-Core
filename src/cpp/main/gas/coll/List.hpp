#ifndef GAS_CORE_COLL_LIST_HPP_13122020_231232
#define GAS_CORE_COLL_LIST_HPP_13122020_231232

#include "..\Object.hpp"

namespace gas{
namespace coll{

template<class T>
class List: public gas::Object{
public:
    virtual int count() = 0;
    virtual void add(T* obj) = 0;
    virtual T* item(const int index) = 0;
    virtual void remove(T* obj) = 0;
    virtual bool has(T* obj) = 0;
};

}
}

#endif 