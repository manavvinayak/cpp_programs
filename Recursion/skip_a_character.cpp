#include <iostream>
#include <string>
using namespace std;
 
// for-loop approach

// int main() {
//     string str = "Vinayak Narayan";
//     string s = "";
//     for(int i=0; i < str.length(); i++){
//         if( str[i] != 'a') s.push_back(str[i]);
//     }
//     cout<<s; 
//     return 0;
// }

// recursive call approach
 
void  removeChar(string  & ans, string & original, int idx){
  // edge
    if( idx == original.length()) return;
     if(original[idx] != 'a' ) ans.push_back(original[idx]);
     removeChar(ans,original,idx +1 );
}
int main() {
   string str = "vinayak narayan";
   string ans = "";
   removeChar(ans, str, 0);
   cout<<ans;
}