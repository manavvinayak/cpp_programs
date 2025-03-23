#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    // taking input
    for(int i=0; i<= n - 1; i++) {
        cin>>arr[i];
    }
    // checking the target element
    int x;
    cout<<"Enter the element you wanna search";
    cin>>x;
    bool flag = false; // element isn't present
    for(int i=0; i<= n-1;i++){
        if(arr[i] == x) flag = true;
    }
    if(flag == true) cout<<"Element Found";
    else cout<<"Element Not Found";
}