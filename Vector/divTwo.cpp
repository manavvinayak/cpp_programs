#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i< v.size(); i++) {
        cin>> v[i];
    }
    // condition
    
     vector <int> ans;
    for(int i=0; i< v.size(); i++) {
        int num = v[i];
        int sum = 0;
        while( num != 0) { 
            int z = num% 10;
            num = num/10;
            sum = sum + z;
         }
         if( sum %2 == 0) {
            ans.push_back(i);
         }
    } 
   
}