#include <iostream>
using namespace std;

int main() {
    int arr[2] [3] = {1,2,3 , 4,5,6};

    // print
    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++){
            cout<<arr[i] [j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    //printing Transpose
    int t[3] [2];
    for(int j=0; j< 3; j++) {
        for(int i=0; i< 2; i++) {
            t[j] [i] = arr[i] [j];
        }
       
    }

    // printing
    for(int i=0; i< 3; i++) {
        for(int j=0; j< 2; j++) {
            cout<<t[i] [j]<< " ";
        }
       cout<<endl;
    }
}