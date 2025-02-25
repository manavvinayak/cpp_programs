#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    int product =1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        product *=  arr[i];

    }
    cout<<product;
    return 0;
}