#ifndef PROFIT_AND_LOSS_H
#define PROFIT_AND_LOSS_H

#include "container.h"
#include "scoop.h"
#include "topping.h"
#include "serving.h"
#include "order.h"
#include "server.h"
#include "customer.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

namespace Mice {

class Profit_loss {
    public:
        std::string name();
        double cash_register();
        void debit(double amount); 
        void credit(double amount);
        int next_id();

        int num_containers();
        int num_scoops();
        int num_toppings();
        int num_orders();
        int num_servers();
        int num_customers();

        Container& container(int index);
        Scoop& scoop(int index);
        Topping& topping(int index);
        Order& order(int index);
        Server& server(int index);
        Customer& customer(int index);
        void calculate_ result(int result);
        void profit(int profit);
        void loss(int loss);
       
         private:
        std::string _name;
        double _cash_register;
        int _id;

        std::vector<Mice::Container> _containers;      // All defined containers
        std::vector<Mice::Scoop> _scoops;              // All defined scoops
        std::vector<Mice::Topping> _toppings;          // All defined toppings
        std::vector<Mice::Order> _orders;              // All defined orders
        std::vector<Mice::Server> _servers;            // All defined servers
        std::vector<Mice::Customer> _customers;        // All defined customers
        std::vector<Mice::Calculate_result> _result;
        std::vector<Mice::profit> _profit;
         std::vector<Mice::loss> _loss;

};

}
#endif 



