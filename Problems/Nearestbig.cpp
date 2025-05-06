#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(7);
    v.push_back(3);
    v.push_back(10);
    v.push_back(8);
    int n = v.size();
    for(int i=0; i< n; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int copy;

    
    for(int i=1; i< n; i++) {
          if(v[0] < v[i] && v[i] < v[i+1]) {
              copy = v[i];
              break;
          }
    }
    if(copy != -1) {
        cout<<copy;
    }
    else {
        cout<<"no";
    }
    
}