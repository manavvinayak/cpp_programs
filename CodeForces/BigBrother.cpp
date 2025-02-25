#include <iostream>
using namespace std;
int main () {
    int a,b ;
     cin>>a;
     cin>>b;
     int ans = 0;
     while(a<=b){
        a = 3*a;
        b = 2*b;
        ans++;
     }
     cout<<ans;
     return 0;
}