#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> m;
    m["Harsh"] = 15;
    m["Lokesh"] = 16;
    m["aditya"] = 17;

    // for(auto x: m){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    m.erase("aditya");
    for(auto x: m){
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}