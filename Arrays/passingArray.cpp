#include <iostream>
using namespace std;
void display(int a[]) {
    for(int i=0; i<=3; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[]) {
    b[0] = 100;
}
int main() {
    int arr[4] = {3,4,5,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    // accessing the elements of array in another function
    // updation, pass by value/ reference
    cout<<size;
    display(arr);
    change(arr);
    display(arr);
}