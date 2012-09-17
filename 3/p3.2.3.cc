#include <iostream>
#include <string>

using namespace std;
int main(int argc, const char *argv[])
{
    
    string st("test string");
    cout << " string.empty() : "<< st.empty() << " , string.size() : " 
        << st.size() << " , string[n] : "<< st[2] << endl;
    return 0;
}
