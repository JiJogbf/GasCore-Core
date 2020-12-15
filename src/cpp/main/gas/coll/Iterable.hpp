#ifndef GAS_COLL_ITERABLE_HPP_15122020_222032
#define GAS_COLL_ITERABLE_HPP_15122020_222032

#include "..\Object.hpp"

namespace gas{
    namespace coll{
        template<class T>
        class Iterable: public Object{
        public:
            virtual Iterator<T>* iterator() = 0;
        };
    }
}

#endif 