#include <iostream>
using namespace std;

// printing 1 to N using extra parameters using while loop

void show(int n){
    int i = 1;
    while(i<= n){
    cout<<i;
    i++;
   }
}

// printing 1 to N using extra parameters using recursion

void showr(int i, int n) {
    if(n == 0) return;
  cout<<i<<endl;
  showr(i+1,n-1);
}
int main() {
    showr(1,6);
   
}