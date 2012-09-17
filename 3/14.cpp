#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// cat data/content.txt | ./a.out
int main(int argc, const char *argv[])
{
    string s;
    vector<string> vs;
    cout<<"start to recv"<<endl;
    while(cin>>s) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        vs.push_back(s);
    }
    unsigned int size = vs.size();
    int wordCount = 1;
    for(int i=0; i< size; i++) {
        cout<<vs[i]<<" ";
        if(wordCount == 8) {
            wordCount = 0;
            cout<<endl;
        }
        wordCount++;
    }
    return 0;
}
