#include <iostream>
using namespace std;

int main() {
    int a[2] [3] = {1,2,4, 5,7,9};
    int b[2] [3] = {7,5,2, 3,9,0};
    // Print matrix a
    for(int i =0; i <2; i++) {
        for(int j=0; j< 3; j++){
            cout<<a[i] [j] <<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;
    // Print matrix b
    for(int i =0; i <2; i++) {
        for(int j=0; j< 3; j++){
            cout<<b[i] [j] <<" ";
        }
        cout<<endl;     
    }
    cout<<endl;
    // Print updated matrix b
    for(int i =0; i <2; i++) {
        for(int j=0; j< 3; j++){
            b[i] [j] = b[i] [j] + a[i] [j];
            cout<<b[i] [j] <<" ";
        }
        cout<<endl;
    }
}