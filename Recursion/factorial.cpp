#include <iostream>
using namespace std;

int fact(int n) {
    // base case
    if (n == 1 || n == 0) return 1;

    // recursive case
    return n * fact(n-1);
}
int main() {
    int m;
    cout<<"Enter no. : ";
    cin>>m;
    cout<<fact(m);
}