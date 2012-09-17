#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int sum = 0;
    for ( int i = 0; i != 10; i++)
        sum += i;
    cout<< "Sum from 0 to "<< i 
        << " is " << sum << endl;
    return 0;
}

// using `g++ -fpermissive 21.cpp` will compile ok
