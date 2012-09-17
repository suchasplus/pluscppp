#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, const char *argv[])
{
    bool hasPunct = false;
    string s;
loop:
    cout<<"Pls enter A string with punct:"<<endl;
    cin>>s;
    for(int index = 0; index < s.size(); index++){
        if(ispunct(s[index])) {
            hasPunct = true;
            break;
        }
    }
    if(!hasPunct) goto loop;


    cout<<"echo string without punct"<<endl;
    for(int index = 0; index < s.size(); index++){
        if(ispunct(s[index])) {
        }else{
            cout<<s[index];
        }
    }
    cout<<endl;
    return 0;
}
