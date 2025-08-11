#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    // delete access insert
    st.push(20);
    st.push(25);
    st.push(30);
    st.push(35);
    st.push(40);
    // we've to insert 200 after 25
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.push(200);
    st.push(25);
    st.push(30);
    st.push(35);
    st.push(40);
    while( st.size() != 0) {
        cout<<st.top()<<endl;
        st.pop();
    }


   
   
    
    return 0;
}