#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    vector<int> ans(n);
    ans[0] = -1;
    int max = nums[0];
    for(int i=1; i< n; i++) {
         if(nums[i] > max) {
            ans[i] =-1;
            max = nums[i];
        }
         else { ans[i] = max;
        }
    }
    for(int i=0; i< n; i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    vector <int> answ(n);
    answ[n-1] = -1;
    int maxi = nums[n-1];
    for(int i= n-2; i >= 0; i--) {
        if(nums[i] > maxi) {
            answ[i] = -1;
            maxi = nums[i];
        }
        else {
            answ[i] = maxi;
        }
    }
    // print
    for(int i=0; i < n; i++) {
        cout<<answ[i]<<" ";
    }
    cout<<endl;

    
}