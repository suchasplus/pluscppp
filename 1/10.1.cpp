#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    int sum = 0;
    int i = 50;
    while(i <= 100) {
        sum += i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}
