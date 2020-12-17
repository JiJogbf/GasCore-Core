#pragma once

#include "Object.hpp"

#include <string>
#include <map>

namespace gas{
    using ConfigMap = std::map<std::string, std::string>;

    class Config: public Object{
    private:
        ConfigMap map;        
    public:
        class Editor: public Object{
        private:
            ConfigMap& map;        
        public:
            Editor(ConfigMap& map);
            ~Editor() override;
            Editor& write(const std::string opt, const std::string& value);
            void commit();
        };
    public:
        Config();
        ~Config() override;
        std::string opt(const std::string& name);
        Editor edit();
    };
}