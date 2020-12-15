#ifndef GAS_COLL_COLLECTION_HPP_15122020_223243
#define GAS_COLL_COLLECTION_HPP_15122020_223243

#include "Iterable.hpp"

namespace gas{
    namespace coll{
        template<class T>
        class Collection: public Iterable<T>{
        public:
            virtual void add(T* a) = 0;
            virtual int count() = 0;
            virtual void remove(T* a) = 0;
            virtual bool contains(T* a) = 0;
        };
    }
}

#endif 