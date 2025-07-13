#include <iostream>
using namespace std;


void fun(int n){
    if(n == 0) return;
    cout<<"Good morning"<<endl;
    fun(n-1);
}
int main() {
    int n;
    cout<<"Enter the iteration value: ";
    cin>> n;
    fun(n);

    return 0;
}