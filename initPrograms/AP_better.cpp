#include <iostream>
using namespace std;
int main() {
    // for a series 4,7,10,13.....
    int a = 4;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=4;i<=n;i++) {
        cout<<a<<endl;
        a = a +3;
    }
}