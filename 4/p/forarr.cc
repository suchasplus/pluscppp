#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
    const size_t array_size = 10;
    int ia[array_size];
    for(size_t ix = 0; ix != array_size; ix++) {
        ia[ix] = ix * 2;
        cout << ia[ix] << endl;
    }
    return 0;
}
