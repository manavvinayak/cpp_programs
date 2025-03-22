#include <iostream>
using namespace std;
    // a function can return more than one return statement but only one will run

int maxthree(int a,int b,int c) {
    if( a>b && a>c) return a;
    else if (b>a && b>c) return b;
    else return c;
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<maxthree(a,b,c);
}