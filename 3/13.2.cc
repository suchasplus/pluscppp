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
    if(vis.size() % 2 != 0) {
        cout<<"size % 2 must == 0 "<<endl;
        return 0;
    }
    unsigned int mid = size / 2;
    for(int i = 0; i < mid; i++) {
        cout << vis[i] + vis[size-1-i] << endl;
    }
    return 0;
}
