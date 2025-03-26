#include <bits/stdc++.h>
using namespace std;

int display(vector<int> v) {
    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }

}

int main() {
    vector<int> v1;
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(8);
    display(v1);
    cout<<endl;
     vector<int> v2(5);
     int i = 0;
     int j = v2.size() -1;
     while( i<v1.size()) {
            v2[j] = v1[i];
            i++;
            j--;
     }
     
    display(v2);
}