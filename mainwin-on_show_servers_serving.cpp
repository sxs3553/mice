nclude "mainwin.h"
#include <exception>
#include <stdexcept>
#include <iostream>
#include "sort_order.h"
Mice::Serving Mainwin::show_server_serving() {
    int container = select_container();
    if (container == -1) throw std::runtime_error("Canceled");
    bool has_no_scoops = true;
    for (int i=0; i<_containers[container].max_scoops(); ++i) {
        int scoop = select_scoop();
        if (scoop == -1) break;
        serving.add_scoop(_scoops[scoop]);
        has_no_scoops = false;
    }
for (int i=0; i<_containers[container].max_scoops(); ++i) {
        int scoop = select_scoop();
        if (scoop == -1) break;
        serving.add_scoop(_scoops[scoop]);
        has_no_scoops = false;
    }
       Mice::Serving serving{_containers[container]};
        Mice::Sort_serving sort_serving{cout>>sort_serving>>endl};
    
    if (has_no_scoops) throw std::runtime_error("Canceled");

    if (_toppings.size() > 0) {
	while (true) {
            int topping = select_topping();
            if (topping == -1) break;
            else serving.add_topping(_toppings[topping]);
        }
    }

    return serving;
}

