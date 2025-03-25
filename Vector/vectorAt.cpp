#include <bits/stdc++.h>

using namespace std;

int main() {
     vector <int> v;
     v.push_back(9);
     v.push_back(10);
     v.push_back(6);
     v.push_back(7);
     for(int i=0; i<v.size();i++) {
        cout<<v.at(i)<< " ";
     }
     cout<<endl;
     // sort
     sort(v.begin(), v.end());
     // output the vector after sorting
     for(int i=0; i<v.size();i++) {
        cout<<v.at(i)<< " ";
     }

}