#include <iostream>
using namespace std;

void printMax(int n,int arr[], int idx,int max ) {
     if(idx == n) {
        cout<<max;
        return;
     }
     if(max < arr[idx]) max = arr[idx];
     printMax(n, arr, idx +1, max );
}
int main() {
    int arr[] = {2,1,6,31,9,0,2000,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    printMax(n, arr, 0, INT8_MIN);
    return 0;
}