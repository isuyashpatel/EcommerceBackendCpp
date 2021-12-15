// Product, Item, Cart
#include <string>
using namespace std;

class Item;
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
    friend class Item;
};

class Item
{
    const Product product;
    int quantity;

public:
    // constructor using a Init List
    Item(Product p, int q) : product(p), quantity(q) {}

    int getItemPrice()
    {
        return quantity * product.price;
    }
};