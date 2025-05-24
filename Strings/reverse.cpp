#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int n = str.length();
    reverse(str.begin(),str.end());
    cout<<str;
}