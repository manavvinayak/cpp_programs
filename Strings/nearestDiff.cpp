#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count = 0;
    int n = s.size();
    for(int i = 0; i < n -1 ; i++) {
            if( s[i] != s[i+1]) count++;
    }
    cout<<count;
}