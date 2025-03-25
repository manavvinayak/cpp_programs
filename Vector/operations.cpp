#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v;
    v.push_back(6);
    v.push_back(9);
    v.push_back(8);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(4);
     // printing elements of vector
     for(int i=0; i< v.size(); i++) {
        cout<<v[i]<<" ";
     }
     cout<<endl;
     v.pop_back();
     cout<<"After using pop_back() function "<<endl;
     for(int i=0; i< v.size();i++) {
        cout<<v[i]<<" ";
     }
     // Note: even after pop_back() capacity does'nt reduce, once incremented it remains the same
     cout<<endl;
     cout<<"Size after pop_back is "<<v.capacity();

}