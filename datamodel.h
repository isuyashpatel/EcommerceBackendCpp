//Product, Item, Cart
#include <string>
using namespace std;

class Product
{
    int id;
    string name;
    int price;

public:
    Product(int u_id, string name, int price)
    {
        id = u_id;
        this->name = name;
        this->price = price;
    }
    string getDisplayName()
    {
        return name + " : Rs " + to_string(price) + "\n";
    }
};
