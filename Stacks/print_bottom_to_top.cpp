// Reverse a Stack
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    st.push(4);
    st.push(5);
    st.push(3);
    st.push(2);
    st.push(23);
   
    stack<int> temp;
    while( st.size() != 0){
        temp.push(st.top());
        st.pop();
     }
   while(temp.size() != 0) {
       cout<<temp.top()<<endl;
       temp.pop();
   }
}