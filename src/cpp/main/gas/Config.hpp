#pragma once

#include "Object.hpp"

#include <string>
#include <map>

namespace gas{
       
    /**
     * @brief Alias for prop collection 
     */
    using ConfigMap = std::map<std::string, std::string>;
    
    /**
     * @brief Custom config for runtime propertie's
     */
    class Config: public Object{
    private:
        ConfigMap map;        
    public:
        
        /**
         * @brief Editor for Config properties
         */
        class Editor: public Object{
        private:
            ConfigMap& map;        
        public:
            /**
             * @brief ctor 
             * 
             * @param[in] map reference to map collection
             * of strings for thuis config
             */
            Editor(ConfigMap& map);
            
            /**
             * @brief dtor
             */
            ~Editor() override;

            /**
             * @brief writing property value in config
             * 
             * @param[in] opt name of option
             * @param[in] value value for option opt
             */
            Editor& write(const std::string opt, const std::string& value);

            /**
             * @brief applying changes to 
             *   this editor session
             */
            void commit();
        };
    public:
        /**
         * @brief ctor
         */
        Config();
        
        /**
         * @brief dtor
         */
        ~Config() override;
        
        /**
         * @brief acces to option with name 
         * 
         * @param[in] name - name of option contained in config.
         */
        std::string opt(const std::string& name);
        
        /**
         * @brief get access to editor.
         */
        Editor edit();
    };
}