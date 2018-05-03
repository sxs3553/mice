#ifndef _NAME_MANAGER_H
#define _NAME_MANAGER_H
#include <string>

namespace Mice {
    class Manager {
      public:
        Manager(std::string name, std::string id, std::string phone);
        std::string name();
        std::string id();
        std::string phone();
        bool is_active();
        void set_active(bool active);
      private:
        std::string _name;
        std::string _id;
        std::string _phone;
        bool _active;
    };
}

#endif

