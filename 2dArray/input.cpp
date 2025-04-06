#include <iostream>
using namespace std;

int main() {
    int m;
    cout<<"Enter number of rows: ";
    cin>>m;
    int n;
    cout<<"Enter number of columns: ";
    cin>>n;
    int arr[m] [n];
    for(int i=0; i< m; i++) {
        for(int j=0; j< n; j++) {
            cin>>arr[i] [j];
        }
    }
    // Print
    for(int i=0; i< m; i++) {
        for(int j=0; j< n; j++) {
            cout<<arr[i] [j]<<" ";
        }
    }
    

}