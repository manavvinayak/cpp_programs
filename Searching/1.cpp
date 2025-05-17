#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> v = {3,4,1,8,5,9,6};
    int target;
    cin>>target;
    bool flag = false;
    for(int i=0; i < v.size(); i++){
        if( v[i] == target) {
        flag = true;
        break;
        }
        
    }
    if(flag == true) cout<<target<<" is present";
    else cout<<target<<" is not present";
}