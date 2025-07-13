#include <iostream>
using namespace std;

void fun(int n){
 if (n == 0) return ;
 cout<<"HelloKW ";
 fun(n-1);

}
int main() {
    fun(6);
}