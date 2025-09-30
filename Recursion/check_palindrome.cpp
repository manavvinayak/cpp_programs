#include <iostream>
#include <vector>
using namespace std;

// iterative approach
// bool palindrome(string s){
//  int i = 0;
//  int j = s.length() -1;
//  while( i <= j){
//     if( s[i] != s[j]) return false;
//     i++;
//     j--;

//  }
//  return true;
// }
// int main() {
//     string s = "racecar";
//     cout<<palindrome(s);
// }

// Recursive-Approach
bool checkPalindrome(string s, int i, int j){
    if(i >= j ) return true;
   if(s[i] != s[j]) return false;
   
    return checkPalindrome(s,i+1, j-1);
   
}
int main (){
    string s = "cum";
    int i =0;
    int j = s.length() -1;
    cout<<checkPalindrome(s, i, j);
}