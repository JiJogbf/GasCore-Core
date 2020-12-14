#ifndef GAS_PTR_HPP
#define GAS_PTR_HPP

#include "Object.hpp"

namespace gas{
    template<class T>
    class Ptr: public Object{
    private:
        T* mPtr;
    public:
        Ptr(T* ptr);
        ~Ptr() override;
    };
}

#include "Ptr_impl.hpp"

#endif