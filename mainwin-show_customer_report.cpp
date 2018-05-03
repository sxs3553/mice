#include "mainwin.h"
#include "customer.h"
#include <exception>
#include <stdexcept>

void Mainwin::on_show_customer_report_click() {
    try {
        std::ifstream ifs{"inventory_report.inv", std::ifstream::in};
        _inv = new Mice::Inventory{ifs};
    } catch (std::exception& e) {
        Gtk::MessageDialog dialog{*this, "Unable to show report"};
        dialog.set_secondary_text(e.what());
        dialog.run();
        dialog.close();
    }
}

