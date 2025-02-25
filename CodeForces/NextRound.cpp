#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,k;
    
    cin>> n>> k;
    vector<int> arr(n);
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }
   
    for (int i = 0; i < n; ++i) {
        if (arr[i] > k ) {
            cout<< arr[i] <<" ";
        }
    }
    return 0;

}