#ifndef PROFIT_H
#define EMPORIUM_H

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

Order::Order(Price price, int order_status)
       :_price{price},_cost{cost},_id{order_number},_state{Order_state::paid}{}
int result;

result=cost-price;

if(result>0)
cout<<"Profit:"<<result;
else
if(result<0)
  cout<<"Loss: " << -(result);
else
cout<<"No profit no loss";

getch();
return 0;
}
