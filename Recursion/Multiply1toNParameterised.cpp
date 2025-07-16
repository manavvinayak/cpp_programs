#include <iostream>
using namespace std;

void multiply1toN( int multiply, int n){
    if(n == 0){
        cout<<multiply;
        return;
    }
    multiply1toN(multiply * n, n - 1);
}
int main() {
    multiply1toN(1,5);  
}