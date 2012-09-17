#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    cout << "s1 : "<< s1 << " , s2 : "<< s2 <<endl;
    bool isEqual = (s1 == s2);
    if(isEqual){
        cout << "s1 == s2 " << endl;
    }else{
        cout << "s1 != s2 " << endl;
        if(s1 > s2) cout<< "s1 gt s2"<<endl;
        if(s1 < s2) cout<< "s1 lt s2"<<endl;
    }
    if(s1.size() > s2.size()) cout<< "s1's length gt s2's"<<endl;
    if(s1.size() < s2.size()) cout<< "s1's length lt s2's"<<endl;
    

    
    return 0;
}
