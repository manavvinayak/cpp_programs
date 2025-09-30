#include <iostream>
#include <string>
using namespace std;
 
void func(string ans, string original){
     // edge case
     if(original== "") {
        cout<<ans<<endl;
        return;
     }

     for(int i=0; i < original.length(); i++){
        char ch = original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
        func(ans + ch, left + right);
     }
     
}
int main() {
    string s = "abc";
    string emp = "";
    func( emp, s);
    return 0;
}                              