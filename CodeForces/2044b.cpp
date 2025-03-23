#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    // for(int i=0; i< ;i++) {
        string a,b;
    cin>>a;
    for(int i=0; i< a.length(); i++){
        reverse(a.begin(),a.end());
        if(a[i]== 'p'){
            cout<<'q';
        }
        else if (a[i] == 'q'){
            cout<<'p';
        }
        else {
            cout<<'w';
        }
    }
    return 0;

}

    