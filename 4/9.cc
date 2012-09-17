#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    const size_t max = 10;
    int ia[max];
    for(int i = 0; i < max; i++) {
        ia[i] = i;
        cout<< "ia["<<i<<"] = "<< i << endl;
    }
    
    return 0;
}
