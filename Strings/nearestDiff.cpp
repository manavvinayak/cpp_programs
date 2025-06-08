#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count = 0;
    int n = s.length();
    for(int i = 0; i < n  ; i++) {
        if(n == 1) { break; }
            if( s[i] != s[i+1] && s[i] != s[i-1]) count++;
            else if(s[0] != s[1] && s[n -1] != s[n -2] ) {
                count ++;
            }
            else if ( n == 2 && s[i] != s[i + 1]) {
                count = 1;
            }

    }
    cout<<count;
}