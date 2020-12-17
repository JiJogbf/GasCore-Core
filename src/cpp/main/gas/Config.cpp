#include "Config.hpp"

namespace gas{
    Config::Editor::Editor(ConfigMap& map): Object(), map(map){}

    Config::Editor::~Editor(){}

    Config::Editor& Config::Editor::write(const std::string opt, const std::string& value){
        map[opt] = value;
        return *this;
    }

    void Config::Editor::commit(){
    }

    Config::Config(): Object(), map(){
    }

    Config::~Config(){
    }

    std::string Config::opt(const std::string& name){
        return map[name];
    }

    Config::Editor Config::edit(){
        return Editor(map);
    }
}