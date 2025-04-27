#include <iostream>
using namespace std;

int main() {
    string str;
    int count = 0;
    getline(cin, str);
    int i;
    while( str[i]!= '\0') {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        } i++;
    }
    cout<<count;
}