#include <iostream>
#include <climits> 
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
    // MIN
    int min = INT_MAX ;
    for(int i=0; i< m; i++) {
        for(int j=0; j< n; j++) {
            if(min > arr[i] [j]) min = arr[i] [j];
        }
    }
    cout<<min;

}