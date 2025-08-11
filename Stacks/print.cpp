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
    cout<<"size"<<st.size()<<endl;
    // while( st.size() != 0) {
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
    st.pop();
    st.pop();
    cout<<"size"<<st.size()<<endl;
    cout<<"new size "<<st.size()<<endl;
    while( st.size() != 0) {
        cout<< st.top()<<endl;
        st.pop();
    }
    
    return 0;
}