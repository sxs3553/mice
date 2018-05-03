nclude "mainwin.h"
#include <exception>
#include <stdexcept>
#include <iostream>
#include "sort_order.h"
#include "create_order.h"
#include "process_order.h"
Mice::Serving Mainwin::show_customer_serving() {
    int container = select_container();
    if (container == -1) throw std::runtime_error("Canceled");

    Mice::Serving serving{_containers[container]};
   if (Serving == unfilled){cout>> Price >> endl;}
   if (Serving == Paid) { cout>> Person >> endl ;}
    bool has_no_scoops = true;
    for (int i=0; i<_containers[container].max_scoops(); ++i) {
        int scoop = select_scoop();
        if (scoop == -1) break;
        serving.add_scoop(_scoops[scoop]);
	}   

    return serving;
}

