#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    unordered_map <int,int> m;
    vector<int> arr= {3,4,5,6,6,6,6,6,6,6,90};
    for(int i=0; i< arr.size(); i++){
          m[arr[i]]++;

    } 
    for(auto x: m){
        cout<<x.first<<" "<<x.second<<endl;
    }



    return 0;
}