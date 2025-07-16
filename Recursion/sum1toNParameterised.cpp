#include <iostream>
using namespace std;

void sum1toN(int sum,int n){
   if(n == 0) {
    cout<<"the sum is "<<sum;
    return;
    }
    sum1toN(sum + n, n-1);

}
int main() {
 sum1toN(0,10);
}