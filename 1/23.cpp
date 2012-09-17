#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(int argc, const char *argv[])
{
    Sales_item total, tmp;
    bool isFirst = true;
    while(cin>>tmp){
        if(isFirst == true) {
            isFirst = false;
            total = tmp;
        }else{
            total += tmp;
        }
    }
    cout<< total <<endl;
    return 0;
}
