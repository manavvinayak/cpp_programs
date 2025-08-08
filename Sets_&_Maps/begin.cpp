#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;
    s.insert(2);
    s.insert(7);
    s.insert(5);
    s.insert(9);
    s.insert(9);
    s.insert(4);
    s.insert(8);
    s.insert(9);
    
    // for-each loop to print elements in set
    for(int ele: s){
        cout<<ele<<" ";
    }
    cout<<endl;
    int target;
    cout<<"Enter target: ";
    cin>> target;
    if(s.find(target) != s.end()){
        cout<<target<<" exists";
    }
    else cout<<target<<" doesn't exists";
    return 0;
}