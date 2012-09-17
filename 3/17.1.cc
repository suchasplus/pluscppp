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
    int first , counter = 1;
    vector<int>::iterator iter = vis.begin();
    while(iter != vis.end()) {
        if(counter %2 == 0) {
            cout<< *iter + first << endl;
        }else{
            first = *iter;
        }
        iter++;
        counter++;
    }
    if(size % 2 != 0) {
        cout<< "last " <<vis[vis.size() - 1]<<endl;
    }
    return 0;
}
