#ifndef _RESTOCK_ITEM_H
#define _RESTOCK_ITEM_H

#include <string>

namespace Mice {

class R_item {
  public:
    R_item(std::string name, std::string description, double cost, double price);
    Item();
    void restock(int quantity = 25);
    void consume(int quantity = 1);
    virtual std::string type() const;
    std::string name() const;
    std::string description() const;
    double cost() const;
    double price() const;
    int quantity() const;
  protected:
    std::string _name;
    std::string _description;
    double _cost;
    double _price;
    int _quantity;
    // Gtk::Image _photo;
};

}

std::ostream& operator<<(std::ostream& os, const Mice::Item& item);

#endif

