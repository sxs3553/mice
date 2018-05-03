#include "mainwin.h"
#include <exception>
#include <stdexcept>

void Mainwin::on_create_manager_click() {
    on_create_person_click("Manager");
}



void Mainwin::on_create_manager_click(std::string role) {

    const int WIDTH = 15;

    Gtk::Dialog dialog{"Create " + role, *this};

    // Name
    Gtk::HBox b_name;

    Gtk::Label l_name{"Name:"};
    l_name.set_width_chars(WIDTH);
    b_name.pack_start(l_name, Gtk::PACK_SHRINK);

    Gtk::Entry e_name;
    e_name.set_max_length(WIDTH*4);
    b_name.pack_start(e_name, Gtk::PACK_SHRINK);
    dialog.get_vbox()->pack_start(b_name, Gtk::PACK_SHRINK);

    // ID
    Gtk::HBox b_id;

    Gtk::Label l_id{"ID:"};
    l_id.set_width_chars(WIDTH);
    b_id.pack_start(l_id, Gtk::PACK_SHRINK);

    Gtk::Entry e_id;
    e_id.set_max_length(WIDTH*4);
    b_id.pack_start(e_id, Gtk::PACK_SHRINK);
    dialog.get_vbox()->pack_start(b_id, Gtk::PACK_SHRINK);
  // Phone
    Gtk::HBox b_phone;

    Gtk::Label l_phone{"Phone:"};
 l_phone.set_width_chars(WIDTH);
    b_phone.pack_start(l_phone, Gtk::PACK_SHRINK);

    Gtk::Entry e_phone;
    e_phone.set_max_length(WIDTH*4);
    b_phone.pack_start(e_phone, Gtk::PACK_SHRINK);
    dialog.get_vbox()->pack_start(b_phone, Gtk::PACK_SHRINK);

    // Salary (Managerr only)                                                                                                                                                                  
    Gtk::HBox b_salary;

    Gtk::Label l_salary{"Hourly Wage:"};
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

    while(!valid_data) {
        if (dialog.run() != 1) {
            dialog.close();
            return;
        }

   if (role == "Manager") {
        Mice::Manager s{e_name.get_text(), e_id.get_text(), e_phone.get_text(), d_salary};
        _emp->add_manager(s);
    } else if (role == "Server") {
        Mice::Server c{e_name.get_text(), e_id.get_text(), e_phone.get_text()};
        _emp->add_server(c);
}

    dialog.close();
}


