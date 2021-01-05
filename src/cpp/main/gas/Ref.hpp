#ifndef GAS_CORE_REF_HPP_18122020_223123
#define GAS_CORE_REF_HPP_18122020_223123

#include "Object.hpp"

namespace gas{
    /**
    * @brief Reference class for some types
    */
    template<class T>
    class Ref: public Object{
        T& mValue;
    public:
        /**
         * @brief ctor for Reference value
         * @param val real object or value for wich we wana create referenc
        */
        Ref(T& val);

        /**
         * @brief access referenced value
        */
        T& value();
    };

#include "Ref_impl.hpp"

}

#endif 