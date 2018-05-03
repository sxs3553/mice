nclude "name_manager.h"

namespace Mice {
Manager::Manager(std::string name, std::string id, std::string phone)
             : _name{name}, _id{id}, _phone{phone}, _active{true} { }
std::string Manager::name() {return _name;}
std::string Manager::id() {return _id;}
std::string Manager::phone() {return _phone;}
bool Manager::is_active() {return _active;}
void Manager::set_active(bool active) {_active = active;}
}



