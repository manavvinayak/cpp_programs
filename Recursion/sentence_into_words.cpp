#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    vector<string> v;
    string c = "The sky is blue";
    string t;
    for(int i = 0; i < c.length(); i++){
        if( c[i] == ' ') {
             v.push_back(t);
            t  = "";
            
        } 
        else t.push_back(c[i]);
    }
    v.push_back(t);
    for(int i=0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

        reverse(v.begin(), v.end());
    

    string ans;
    for(int i = 0; i < v.size(); i++){
     
       if(i == v.size() -1) { ans = ans + v[i] ; }
       else   ans = ans + v[i] + " ";
       
    }
    cout<<endl;
    cout<<ans;
        
       
       

    return 0;
}