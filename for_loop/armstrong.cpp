#include <iostream>
using namespace std;
int main() {
    int n;
    cin>> n;
    int copy=n;
    int sum =0;
    
   while(n>0) {
        int rem= n%10;
        n=n/10;
        int cube = (rem * rem * rem);
        cout<< cube<<" ";
        sum += cube;
    }
    cout<<sum<<" ";
    if(copy == sum){
        cout<<"YES";
    }
    else cout<<"no";
    return 0;
}