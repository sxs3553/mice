#ifndef INVENTORY_REPORT_H
#define INVENTORY_REPORT_H

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

class Inventory_report {void setItemNumber(int &temp)

    public:
void setItemNumber(int &temp);
void setQuantity(int &temp);
void setPrice(double &price);
void inventory :: init();
void inventory :: store();
void inventory :: retrieve();

private:

int temp;
double locator;
int counter;
int price;
int cost;

}
