#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    stack<int> st;
    vector<int> v;
    st.push(20);
    st.push(25);
    st.push(30);
    st.push(35);
    st.push(40);
  
    cout<<"Size is "<<st.size();
    // we've to insert 200 after 25
    while( st.top() != 20){
        v.push_back(st.top());
        st.pop();
    }
    st.push(200);
    for(int i=v.size() -1; i >= 0; i--){
        st.push(v[i]);
    }
    while( st.size() != 0){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<"Size is "<<st.size();

    return 0;
}