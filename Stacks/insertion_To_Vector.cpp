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
    
    while( st.size() != 0){
        v.push_back(st.top());
        st.pop();
    }
    for(int i=0; i< v.size(); i++){
        cout<<v[i]<<endl;
    }
    

    return 0;
}