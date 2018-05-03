#include "inventory_manager.h"
#include <stdexcept>

void setItemNumber(int &temp)
{
    do
    {
        cout << "\nPlease enter the item number (if finished please enter '0'): ";
        cout << "\nNumber must be positive: " << endl;
        cin >> temp;        
    } while (temp < 0);
}
void setQuantity(int &temp)
{
    do
    {
        cout << "\nPlease enter the Quantity: ";
        cout << "\nNumber must be positive: " << endl;
        cin >> temp;        
    } while (temp < 0);
}
void setPrice(double &price)
{
    do
    {
        cout << "\nPlease enter the Price: ";
        cout << "\nNumber must be positive: " << endl;
        cin >> price;       
    } while (price < 0);
}

void inventory :: init()
{
    int counter = 0;
    while (counter < 10)
    {
        productCount[counter] = 0;
        productNum[counter] = 0;
        productPrice[counter]= 0;
        counter++;
        locator = counter;
    }
}

void inventory :: store()
{
    int counter = 0, temp = 0;
    double price = 0;
    cout << "\nWelcome to the inventory control system" << endl;
    cout << "When finished please enter '0' for the item number" << endl;
    while (counter < locator)
    {
        setItemNumber(temp);
        if(temp == 0)
        {
            locator = counter;
            return;
        }
        productNum[counter]=temp;
        setQuantity(temp);
        productCount[counter]=temp;
        setPrice(price);
        productPrice[counter]=price;
        counter++;
    }
}

void inventory :: retrieve()
{
    int counter = 0;
    double total = 0;
    cout << "Product Number \t\t Product Count \t\t Price" << endl;
    cout << "_____________________________________________________" << endl;
    while (counter < locator)
    {
        cout << productNum[counter];
     cout << "\t\t\t" << productCount[counter];
        cout << "\t\t\t" << productPrice[counter] << endl;
        total = productCount[counter] * productPrice[counter] + total;
        counter++;
    }
    cout << "Your total inventory is valued at: $" << total << endl;
}

int main()
{

    inv1.init();
    inv1.store();
    inv1.retrieve();

    return 0;
}


