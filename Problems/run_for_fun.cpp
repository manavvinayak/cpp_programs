#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
     int x,y;
     cin>>x >>y;
     int ans = 0;
     ans = y/x;
     if(y%x == 0){
         ans--;
     }
     cout<<ans;
     return 0;
}