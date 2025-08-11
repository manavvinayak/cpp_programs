#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(4);
    s.push(5);
    s.push(7);
    s.push(9);
    cout<<s.top()<<endl;
   
    
    return 0;
}