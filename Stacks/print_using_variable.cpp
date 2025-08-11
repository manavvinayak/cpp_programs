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
     int x;
     while( st.size() != 0){
         x = st.top();
          st.pop();
         cout<<x<<endl;
        

     }

    return 0;
}