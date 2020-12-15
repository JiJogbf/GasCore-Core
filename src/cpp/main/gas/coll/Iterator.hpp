#ifndef GAS_COLL_ITERATOR_HPP_15122020_225423
#define GAS_COLL_ITERATOR_HPP_15122020_225423

#include "..\Object.hpp"

namespace gas{
    namespace coll{
        template<class T>
        class Iterator: public Object{
        public:
            virtual T* next() = 0;
            virtual bool hasNext() = 0;
        };
    }
}

#endif 