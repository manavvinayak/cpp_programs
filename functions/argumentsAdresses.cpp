#include <iostream>
using namespace std;
void fun(int x, int y){
    cout<<"The address of  x is"<<&x<<endl;
    cout<<"The address of  y is"<<&y<<endl;
}
int main() {
    int x;
    int y;
    cout<<"The address of main x is"<<&x<<endl;
    cout<<"The address of main y is"<<&y<<endl;
     fun(x,y);
}