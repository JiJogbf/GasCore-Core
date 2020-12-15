#ifndef GAS_CORE_COLL_LIST_HPP_13122020_231232
#define GAS_CORE_COLL_LIST_HPP_13122020_231232

#include "Collection.hpp"

namespace gas{
namespace coll{

template<class T>
class List: public Collection<T>{
public:
    virtual T* get(const int index) = 0;
    virtual void set(const int index, T* value) = 0;
};

}
}

#endif 