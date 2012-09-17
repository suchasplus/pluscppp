#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    int base, exponent;
    cin>>base>>exponent;
    int result=1;
    for(int i = 0; i != exponent; i++) {
        result *= base;
    }
    cout << "result is " << result << endl;
    return 0;
}
