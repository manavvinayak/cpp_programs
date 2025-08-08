#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
     unordered_set<int> s;
     s.insert(3);
     s.insert(4);
     s.insert(7);
     for( int ele: s){
        cout<<ele;
     }

    return 0;
} 