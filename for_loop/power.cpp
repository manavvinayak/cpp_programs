#include <iostream>
using namespace std;
int main() {
    // code is applicable to positive a and b
    int a,b;
    cout<<"Enter Base ";
    cin>>a;
    cout<<"Enter Exponent/Power ";
    cin>>b;
    int power= 1;
    for(int i=1; i<=b; i++) {
        power = power*a;
    }
    cout<<power<<endl;
}