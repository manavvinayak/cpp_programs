#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> m;
    m[1]= "Aarav";
    m[2]= "Abac";
    m[3]= "Adipurush";
    int target;
    cout<<"ENTER TARGET: ";
    cin>>target;
   if(m.find(target) != m.end()) {
      cout<<target<<" exists";
   } 
   else cout<<target<<" doesn't exists";
    return 0;
}