#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int,char>>v;
    vector<int> nums1 = {1,2,3,4,5};
    vector<int> nums2 = {'a','b'};
    vector<int> ans;
    for(int i=0; i < nums1.size(); i++ ) {
        v.push_back({nums1[i], 'a'});
    }

    for(int i=0; i < v.size(); i++){
        cout<<v[i].first;
               
        cout<<v[i].second;       
         cout<<endl; 
    }
}