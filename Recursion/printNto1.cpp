#include <iostream>
using namespace std;
 
void show(int n) {
    if( n == 0) return ;
    cout<<n<<endl;
    show(n-1);
}
int main() {
     show(5);
   
}