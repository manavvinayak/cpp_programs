#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort01(vector <int> & v) {
    int n = v.size();
    int no1 = 0;
    int no0 = 0;
    for(int i=0; i< n; i++) {
        if(v[i] == 0) no0++;
        else no1++;
    }
    // Filling elements
    for(int i=0; i< n; i++) {
        if(i < no0) v[i] =0;
        else v[i] = 1;
    }
}

void sort01Diff (vector<int> &v) {
    int n = v.size();
    int i = 0;
    int j = n -1;
    while(i < j) {
        if (v[i] == 0) i++;
        if (v[j] == 1) j--;
        if( i > j) break;
        if(v[i] == 1 && v[j] == 0) {
            // Swap
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}

int main() {
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    for(int i=0;i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01Diff(v);
    for(int i=0;i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
}
