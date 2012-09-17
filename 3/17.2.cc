#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(int argc, const char *argv[])
{
    int num;
    vector<int> vis;
    cout << "input several int s"<<endl;
    while(cin >> num) {
        vis.push_back(num);
    }
    vector<int>::size_type size = vis.size();
    if(vis.empty()) return -1;
    /*
    if(vis.size() % 2 != 0) {
        cout<<"size % 2 must == 0 "<<endl;
        return 0;
    }
    */
    vector<int>::iterator first = vis.begin(), last = vis.end() - 1;
    for(;first < last; first++, last--) {
        cout<<*first + *last<<endl;
    }
    if(first == last) {
        cout<<*first << " middle"<<endl;
    }
    return 0;
}
