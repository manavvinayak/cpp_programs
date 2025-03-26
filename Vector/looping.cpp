#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v;
    v.push_back(2);
    v.push_back(6);
    v.push_back(8);
    v.push_back(2);
    v.push_back(8);
    v.push_back(5);

    int x = 2;
    int idx = -1; // element whose last index has to be determined
    for(int i=0; i< v.size(); i++){
        if(v[i] == x) idx = i;
    }
    cout<<idx;

}