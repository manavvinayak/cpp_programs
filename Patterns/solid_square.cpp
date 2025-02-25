#include <iostream>
using namespace std;
int main() {
    int n,m;
    cout<<"Enter side of a row : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            // same no. of rows and column will print stars to show the shape of a square 
            cout<<"*";
        }
        cout<<endl;
        
    }
}