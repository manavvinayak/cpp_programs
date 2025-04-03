#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {-1,0,1,2,-1,-4};
    int n = nums.size();
    for(int i=0; i< (n-2); i++) {
       for(int j=i+1; j < (n-1); j++ ) {
        for(int k = j+1; k < n; k++) {
            if( nums[i] + nums[j] + nums[k] == 0) {
                cout<<i<<j<<k<<" ";
                cout<<endl;
            }
        }
       }
    }
}