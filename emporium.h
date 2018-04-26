#ifndef _EMPORIUM_H
#define _EMPORIUM_H

#include "serving.h"
#include "customer.h"
#include "server.h"
#include <vector>

namespace Mice {

class Emporium {
  public:
    Order(Customer customer);
    void add_serving(Serving serving);
    std::vector<Serving> servings() const;

    void fill(Server server);
    void pay();
    void cancel();

    int id() const;
    double cost() const;
    double price() const;
    Order_state state() const;
  private:
    int _id;
    static int _next_id;
    Customer _customer;
    Server _server{"TBD", "TBD", "TBD", 0};
    Order_state _state;
    std::vector<Serving> _servings;
};

}

std::ostream& operator<<(std::ostream& os, const Mice::Order& order);

#endif

