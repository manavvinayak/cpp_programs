#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s,t;
    getline(cin, s);
    cout<<endl;
    getline(cin, t);
    sort(s.begin(),s.end());
    cout<<s<<" ";
   
    sort(t.begin(),t.end());
    cout<<t<<" ";
    if(s == t) cout <<true;
    else cout<<false;
     
}