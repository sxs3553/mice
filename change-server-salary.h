#ifndef CHANGE_SERVER_SALARY_H
#define CHANGE_SERVER_SALARY_H 

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

class Salary {
    public:
        int change_salary(int Salary);
        bool upgrade(void Server);

     private:
       int Salary;
       int new_salary;


}
