#include <iostream>
using namespace std;

// b is base, e is exponent

int power(int b,int e){
   if(e == 0) { return 1; }
   return b * power(b,e-1);
}

int main(){
   int b,e;
   cout<<"ENTER BASE: ";
   cin>>b;
   cout<<"ENTER POWER: ";
   cin>>e;
   cout<<b<<" raised to the power "<<  e<<"is "<< power(b,e);
}