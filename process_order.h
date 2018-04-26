#ifndef _PROCESS_ORDER_H
#define _PROCESS_ORDER_H

#include "emporium.h"
#include "serving.h"
#include "customer.h"
#include "server.h"
#include <vector>

namespace Mice {

class process_order {
  public:
    filled();
    unfilled();
    int paid();
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



