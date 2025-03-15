#include <iostream>
using namespace std;
void func(int x=8,int y=3){
    // 8 and 3 are default values of x and y respectively!
    
    cout<<x<<" "<<y;
}
int main() {
    func();
}