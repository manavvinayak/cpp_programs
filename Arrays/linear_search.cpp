#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n; 
    int x;
    cout<<"Target element";
    cin>>x;
    int arr[n];
    bool flag = false; // NOT Found
    for(int i=0; i< n; i++) {
        cin>>arr[i];
        if (arr[i]== x){
            bool flag = true;
            cout<<"Found";
        }
        else{
            cout<<"Not found ";
            break;
        }
        
    }
     
    return 0;
}