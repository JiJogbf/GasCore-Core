#ifndef GAS_PTR_HPP
#define GAS_PTR_HPP

#include "Object.hpp"

namespace gas{

    /**
     * @brief Basic smart pointer in Core module
    */
    template<class T>
    class Ptr: public Object{
    private:
        T* mPtr;
        int mCount;
    public:
        /**
         * @brief ctor
         * 
         * @param[in] ptr pointer with type of T
        */
        Ptr(T* ptr);

        /**
         * @brief copy ctor
         * 
         * @param[in] p source pointer
        */
        Ptr(Ptr& p);

        /**
         * @brief dtor
        */
        ~Ptr() override;

        /**
         * @brief assigment operator
        */
        Ptr& operator=(Ptr& p);

        /**
         * @brief the dereference operator
        */
        T& operator*();

        /**
         * @brief member access operator overloading
        */
        T* operator->();

        /**
        * @brief casting to pointer of holded pointer
        */
        operator T*();        
    };
}

#include "Ptr_impl.hpp"

#endif