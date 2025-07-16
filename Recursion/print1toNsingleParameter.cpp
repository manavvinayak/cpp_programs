#include <iostream>
using namespace std;

void show(int n){
    if(n == 0) return;
     show(n-1);
    cout<<n<<endl;
   
}
int main() {
   show(7);
}