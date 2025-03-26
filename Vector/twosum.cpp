#include <iostream>
#include <vector>
using namespace std;

int main() {
    int target;
    cout<<"Enter target: ";
    cin>>target;
    vector <int> nums;
    int n;
    cout<<"Enter array size";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        nums.push_back(q);
    }
    for(int i=0; i< n -1; i++){
        for(int j=i+1;j< n ;j++) {
            if(nums[i] + nums[j] ==target) {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}