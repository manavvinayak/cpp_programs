#include <iostream>
using namespace std;

int main() {
    string str = {"StringAssesment"};
    cout<<str;
    cout<<endl;

    string ch = {'a','g','w'}; // a type of character array
    for (int i=0; i < ch.length(); i++) {
        cout<<ch[i]<<" ";
    }
}