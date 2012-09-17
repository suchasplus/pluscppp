#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    int ia1[3] = { 0, 0, 0};
    int ia2[3] = { 0, 0, 0};
    
    bool iaeq = true;
    for(int i =0; i< 3; i++) {
        if(ia1[i] != ia2[i]) {
            iaeq = false;
            break;
        }
    }
    cout << " ia1 == ia2 is: " << iaeq << endl;

    int ia3[3] = { 0, 1, 2};
    int ia4[3] = { 1, 2, 2};
    iaeq = true;
    for(int i =0; i< 3; i++) {
        if(ia3[i] != ia4[i]) {
            iaeq = false;
            break;
        }
    }
    cout << " ia3 == ia4 is: " << iaeq << endl;

    const size_t vsize = 10;
    vector<int> v1(vsize, 0);
    vector<int> v2(vsize, 1);

    bool veq = true;
    if(v1.size() != v2.size()) {
        cout << " v1 != v2 " << endl;
    }else{
        vector<int>::iterator vr1 = v1.begin();
        vector<int>::iterator vr2 = v2.begin();
        while(vr1 != v1.end()) {
            if(*vr1 != *vr2) {
                veq = false;
                break;
            }
        }
    }

    cout<< " v1 == v2 is: " << veq << endl;


    return 0;
}
