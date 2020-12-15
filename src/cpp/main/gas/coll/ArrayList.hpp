#ifndef GAS_CORE_COLL_ARRAY_LIST_HPP_14122020_001204
#define GAS_CORE_COLL_ARRAY_LIST_HPP_14122020_001204

#include "List.hpp"

namespace gas{
namespace coll{

template<class T>
class ArrayList: public List<T>{
private:
    T** mItems;
    int mCount;
    int mCapacity;
public:
    ArrayList(int capacity);
    ~ArrayList();
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