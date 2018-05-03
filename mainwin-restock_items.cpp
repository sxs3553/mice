#include "mainwin.h"
#include <exception>
#include <stdexcept>
#include "item.h"
                                                  
void Mainwin::on_restock_item_click() {

    // /////////////////////////////                                            
    // Select Item Type                                                         
    Gtk::Dialog dialog_type{"Restock new item  // TODO: Replace this with 3 large, colorful buttons                        
    Gtk::ComboBoxText c_type;
    c_type.set_size_request(WIDTH*10);
    const int CONTAINER = 0;
    c_type.append("Container");
    const int SCOOP = 1;
    c_type.append("Ice Cream Flavor");
    const int TOPPING = 2;
    c_type.append("Topping");
    b_type.pack_start(c_type, Gtk::PACK_SHRINK);
    dialog_type.get_vbox()->pack_start(b_type, Gtk::PACK_SHRINK);
", *this};
    //dialog_type.set_title("Select Item Type");                                
    const int WIDTH = 15;

    // Type                                                                     
    Gtk::HBox b_type;

    Gtk::Label l_type{"Type:"};
    l_type.set_width_chars(WIDTH);
    b_type.pack_start(l_type, Gtk::PACK_SHRINK);

    dialog_type.add_button("Cancel", 0);
    dialog_type.add_button("OK", 1);
    dialog_type.show_all();
    if (dialog_type.run() != 1) {
        dialog_type.close();
        return;
    }

    int type = c_type.get_active_row_number();

    dialog_type.close();

 if (type == CONTAINER) {
        _emp->add_container(
            Mice::Container{e_name.get_text(), e_desc.get_text(), d_cost, d_pri\
ce, i_max_scoops});
    } else if (type == SCOOP) {
        _emp->add_scoop(
            Mice::Scoop{e_name.get_text(), e_desc.get_text(), d_cost, d_price})\
;
    } else {
        _emp->add_topping(
            Mice::Topping{e_name.get_text(), e_desc.get_text(), d_cost, d_price\
, 0});
    }

    dialog.close();
}

 
