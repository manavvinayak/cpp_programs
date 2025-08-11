#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    st.push(4);
    st.push(5);
    st.push(7);
    st.push(9);
    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    cout<<st.size();

    
    return 0;
}