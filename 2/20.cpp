#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    int i = 100, sum =0;

    for(int i = 0; i != 10; i++)
        sum += i;
    cout<< i << " " << sum << endl;
    return 0;
}
