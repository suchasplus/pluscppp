#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    const size_t array_size = 3;
    int ia1[array_size] = { 1, 3 ,5};
    int ia2[array_size];
    for(int index = 0; index < array_size; index++) {
        ia2[index] = ia1[index];
    }
    vector<int> v1(array_size, 10);
    vector<int> v2(array_size, 0);
    vector<int>::iterator vr1 = v1.begin();
    vector<int>::iterator vr2 = v2.begin();
    for(; vr1 != v1.end(); vr1++, vr2++) {
        *vr2 = *vr1;
        cout<< *vr2 << endl;
    }
    return 0;
}
