#include <iostream>
#include "datamodel.h"
using namespace std;

int main()
{
    Product p(1, "apple", 26);
    cout << p.getDisplayName();

    return 0;
}