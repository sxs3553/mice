#include "mainwin.h"
#include <exception>
#include <stdexcept>
#include <iostream>
#include <sstream>

void Mainwin::on_edit_container_click() {

    if (_emp->num_containers() == 0 || _emp->num_scoops() == 0) {
        Gtk::MessageDialog dialog{*this, "At least 1 container and 1 scoop\nmus\                                                                                                              
t be created first"};
        dialog.run();
        dialog.close();
        return;
    }
    // Select a customer or quit                                                                                                                                                              
    int customer = select_customer();
    if (customer < 0) return;

    Mice::Order order{_emp->customer(customer), _emp->next_id()};

 int id = 0;
    while(true) {
        try {
            Mice::Serving serving = create_serving();

            // Convert the order to text using a string stream                                                                                                                                
            std::ostringstream os;
            os << serving << std::endl;

            // Display the receipt in a dialog                                                                                                                                                
            Gtk::MessageDialog dialog{*this, "Serving " + std::to_string(++id)}\
;
            dialog.set_secondary_text("<tt>" + os.str() + "</tt>", true);
            dialog.run();
            dialog.close();

            order.add_serving(serving);
        } catch(std::runtime_error e) { // User canceled order                                                                                                                                
            break;
        }
}
}
}
