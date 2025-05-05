#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    
    int copy;
    v.push_back(9);
    v.push_back(8);
    v.push_back(6);
    v.push_back(7);
    v.push_back(5);
    v.push_back(4);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    int n = v.size();
    for(int i=0; i< n; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=n-1; i >= 1; i--) {
        if(v[i] > v[i-1]) {
            copy = i-1;
            break;
        }
    }
    cout<<copy;
   
}