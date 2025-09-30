#include <iostream>
#include <vector>
using namespace std;

void generate(int n, string & s,char prev, vector<string> & ans) {
    // edge
    if (s.size() == n) {
        ans.push_back(s);
        return ;
    }  
    if(prev != '0') { 
        s.push_back('0');
        generate(n, s, '0', ans);
        s.pop_back();
      }
      if(prev != '1') {
        s.push_back('1');
        generate(n,s, '1', ans);
        s.pop_back();
      }
}
int main() {
    string s = "";
    char prev = ' ';
    vector<string> ans;
    int n = 3;
    generate(n, s,prev, ans);
    for(int i=0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    
}