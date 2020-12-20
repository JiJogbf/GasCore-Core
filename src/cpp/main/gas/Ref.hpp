#ifndef GAS_CORE_REF_HPP_18122020_223123
#define GAS_CORE_REF_HPP_18122020_223123

#include "Object.hpp"

namespace gas{
    template<class T>
    class Ref: public Object{
        T& mValue;
    public:
        Ref(T& val);
        T& value();
    };

#include "Ref_impl.hpp"

}

#endif 