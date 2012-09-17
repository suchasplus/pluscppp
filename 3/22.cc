#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    vector<int> vi(10, 16);
    for(vector<int>::iterator iter = vi.begin(); iter != vi.end(); iter++) {
        *iter = *iter * 2;
    }
    vector<int>::iterator mid = (vi.begin() + vi.end())/2;
    cout<< "mid is "<< *mid << endl;
    
    return 0;
}
