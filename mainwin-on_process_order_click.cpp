#include "mainwin.h"
#include <exception>
#include <stdexcept>
#include <iostream>
#include <sstream>

void Mainwin::on_process_order_click() {

    if (_containers.size() == 0 || _scoops.size() == 0) {
        Gtk::MessageDialog dialog{*this, "Prepare an order for a customer"};
        dialog.run();
        dialog.close();
        return;
    }
    // Select unfilled or quit                                                
    int selection = unfilled();
    if (selection < 0) return;
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

