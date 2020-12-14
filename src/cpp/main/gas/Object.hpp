#ifndef GAS_OBJECT_HPP_13122020_144423
#define GAS_OBJECT_HPP_13122020_144423

namespace gas{
    namespace str{
        class String;
    };
    
    class Object{
    public:
        Object();
        virtual ~Object();
        virtual str::String* toString();
        virtual Object* clone();
    };
}

#endif