#ifndef _EDIT_ICECREAM_H
#define _EDIT_ICECREAM_H

#include "item.h"
#include <iostream>
#include <fstream>
#include "scoop.h"
namespace Mice {

class Flavor : public Item {
  public:
    Scoop(std::string name, std::string description, double cost, double price);
    Scoop(std::istream& ist);
    void save(std::ostream& ost);
    std::string type() const override;
};

}
#endif

