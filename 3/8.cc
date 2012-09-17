#include <iostream>
#include <string>
#include <vector>
#include <boost/algorithm/string/join.hpp>
using namespace std;
int main(int argc, const char *argv[])
{
    string all;
    string tmp;
    vector<string> vs;
    const char* delim = " ";
    while(cin>>tmp){
        all += tmp;
        vs.push_back(tmp);
    }
    cout<<"all string is: "<<all<<endl;
    cout<<"vector<string> size:"<<vs.size()<<endl;
    cout<<"output vector is:"<<(boost::algorithm::join(vs, delim))<<endl;
    return 0;
}
