#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // print character occuring most number of times
    string s;
    getline(cin, s);
    string max;
    for(int i = 0; i < s.size() -1 ; i++){
        {
            for( int j = i+1; j < s.size(); j++) {
               if(s[i] == s[i+1] && s[i] == s[j]  ) {max = s[i];}
            }
        }
       
    }    
    cout<< max;
}