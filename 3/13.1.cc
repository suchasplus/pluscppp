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
    if(vis.size() == 1) {
        cout<<"only one int: "<<vis[0]<<endl;
        return 0;
    }
    for(vector<int>::size_type i = 0; i<= (vis.size() - 1);) {
        //cout<< " vis[i] is: "<< vis[i] << " vis[i+1] is : "<<vis[i+1] << endl;
        if((i+2) <= vis.size()) {
            cout<<vis[i] + vis[i+1]<<endl;
        }
        i = i + 2;
    }
    if(size % 2 != 0) {
        cout<< "last " <<vis[vis.size() - 1]<<endl;
    }
    return 0;
}
