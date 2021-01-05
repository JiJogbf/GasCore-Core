#ifndef GAS_OBJECT_HPP_13122020_144423
#define GAS_OBJECT_HPP_13122020_144423

namespace gas{
    namespace str{
        class String;
    };
    
    /**
     * @brief Base class for all module classes
     * in current project
     */
    class Object{
    public:
        /**
         * @brief base ctor
        */
        Object();
        
        /**
         * @brief base ctor
        */
        virtual ~Object();

        /**
         * @brief Converting this object to String
         * repte
        */
        virtual str::String* toString();

        /**
         * @brief Converting this object to String
         * representation
        */
        virtual Object* clone();
    };
}

#endif