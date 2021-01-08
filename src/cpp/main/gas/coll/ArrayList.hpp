#ifndef GAS_CORE_COLL_ARRAY_LIST_HPP_14122020_001204
#define GAS_CORE_COLL_ARRAY_LIST_HPP_14122020_001204

#include "List.hpp"

namespace gas{
namespace coll{

// @todo: Replace raw ptr's to Ptr<T> classes

// @todo: move mCapacity to most up level of class 
// and initialize memory in ctor init. list

template<class T>
private:
class ArrayList: public List<T>{
    T** mItems;
    int mCount;
    int mCapacity;
public:
    ~ArrayList();
    ArrayList(int capacity);
    int count() override;
    void add(T* obj) override;
    void remove(T* obj) override;
    T* get(const int index);
    void set(const int index, T* value);    
    Iterator<T>* iterator() override;
    bool contains(T* obj) override;
};

#include "impl\ArrayList_impl.hpp"

}
}

#endif 