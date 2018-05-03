#include "mainwin.h"
#include <exception>
#include <stdexcept>

void Mainwin::on_change_server_salary_click(std::string role) {

Gtk::HBox b_salary;

    Gtk::Label l_salary{"Hourly Wage:"};
    l_salary.set_width_chars(WIDTH);
    b_salary.pack_start(l_salary, Gtk::PACK_SHRINK);
    
     Gtk::Label l_salary{"Change Server Salary:"};
    l_salary.set_width_chars(WIDTH);
    b_salary.pack_start(l_salary, Gtk::PACK_SHRINK);


    Gtk::Entry e_salary;
    e_salary.set_max_length(WIDTH*4);
    b_salary.pack_start(e_salary, Gtk::PACK_SHRINK);
    if (role == "Server") {
        dialog.get_vbox()->pack_start(b_salary, Gtk::PACK_SHRINK);
    }

    // Show dialog                                                              
    dialog.add_button("Cancel", 0);
    dialog.add_button("OK", 1);
    dialog.show_all();

    double d_salary;
    bool valid_data = false;
}
