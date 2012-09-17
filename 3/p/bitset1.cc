#include <iostream>
#include <bitset>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    bitset<16> bitvec1(0xFF0F);
    bitset<32> bitvec2(0xFF0F);
    cout<< bitvec1<< endl;
    cout<< bitvec2<< endl;

    string strval1("1010");
    bitset<4> bitvec3(strval1);
    cout<< bitvec3 << endl;

    string strval2("10110100");
    bitset<4> bitvec4(strval2);
    cout<< bitvec4 << endl;  //1011

    string strval3("10011100");
    bitset<8> bv(strval3);
    cout<<" raw bs is " << bv << endl;
    cout<<" bs.any() " << bv.any()  <<endl;
    cout<<" bs.size() " << bv.size() <<endl;
    cout<<" bs.count() " << bv.count() <<endl;
    cout<<" bs.none() " << bv.none() <<endl;
    cout<<" bs.test(3) " << bv.test(3) <<endl;
    cout<<" bs.flip() " << bv.flip() <<endl;
    cout<<" bs.to_ulong() " << bv.to_ulong() <<endl;


    return 0;
}
