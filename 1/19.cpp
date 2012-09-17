#include <iostream>
using namespace std;
int main(int argc, const char *argv[])
{
    cout<<"Enter two numbers"<<endl;
    int v1, v2;
    cin>> v1 >> v2;
    if( v1 == v2 || ((v1 - v2) == 1) || (v2 - v1) == -1 ) {cout<< v1<<endl; return 0;}
    int s, b;
    if(v1 < v2) { s = v1+1; b = v2-1;} else { s = v2+1; b = v1-1;}

    int lineCount = 0;
    for(; s <= b; s++) {
        cout<<s<<" ";
        lineCount++;
        if(lineCount > 9) {
            cout << endl;
            lineCount = 0;
        }
    }
    cout<<endl;
    return 0;
}
