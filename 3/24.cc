#include <iostream>
#include <bitset>
#include <string>
#include <vector>
using namespace std;

int main(int argc, const char *argv[])
{
    bitset<32> bs(0x20212E);
    cout<<bs<<endl;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    int i = 0;
    int index = 2;
    while( i < 21) {
        i = v[index - 1] + v[index - 2];
        v.push_back(i);
        cout<< "current int is : "<<i<<endl;
        index++;
    }
    bitset<32>  bv;
    for(int x = 0; x < v.size(); x++) 
    {
        bv.set(v[x]);
    }
    cout<<bv<<endl;
    //bool eq = (bv.to_ulong() == bs.to_ulong());
    bool eq = (bv == bs);

    cout<< eq <<endl;

    return 0;
}
