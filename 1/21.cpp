#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(int argc, const char *argv[])
{
    Sales_item item;
    while(cin >> item) {
        cout << item<<endl;
    }
    cout<<endl;
    return 0;
}
