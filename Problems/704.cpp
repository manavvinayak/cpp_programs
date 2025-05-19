#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> nums = {4,5,6,8,9};
    int target;
    cin>>target;
    int low = 0;
    int n = nums.size() - 1;
    int high = n - 1;
    while(low <= high){
        int mid = low + (high - low)/ 2;
        if(mid == target) cout<<mid;
        else if( mid > target) high = mid - 1;  
        else low = mid + 1; 
            
    }

        return 0;

}