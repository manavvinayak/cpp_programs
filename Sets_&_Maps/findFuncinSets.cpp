#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;
    s.insert(6);
    s.insert(8);
    s.insert(9);
    s.insert(2);
    int target = 8;
    if (s.find(target) != s.end()){
        cout<<target<<" exists";
    }
    else cout<<target<<" doesn't exists";
    return 0;
}