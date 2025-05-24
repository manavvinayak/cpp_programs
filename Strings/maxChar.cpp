#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int max = 0;
    for(int i=0; i < s.size(); i++) {   
        if(s[i] > max) max = s[i];
    }
    cout<<max;
}