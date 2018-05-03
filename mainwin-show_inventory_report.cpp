#include "mainwin.h"
#include "inventory_report.h"
#include <exception>
#include <stdexcept>

void Mainwin::on_show_inventory_report_click() {
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




