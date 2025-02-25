#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"ENTER A NO. ";
    cin>>n;
    int a =1,b=1,sum =0;
    for(int i =1; i<=n-2; i++) {
        // main algo for fibonacci series 
        sum = a+b;
        a = b;
        b = sum;
    }
    cout<<b<<endl;// as b is getting the final series number,also it avoids unwanted int

}