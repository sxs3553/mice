#include "mainwin.h"
#include "profit_and_loss.h"
#include <exception>
#include <stdexcept>

void Mainwin::on_show_profit_and_loss_statement_click() {
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

