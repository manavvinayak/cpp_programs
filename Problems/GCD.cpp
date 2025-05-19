#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x,y;
    cin>>x>>y;
    int ans;
    for(int i=1; i < min(x,y); i++){
        if(x% i == 0 && y%i == 0) {
            ans = i;
        }
    }
       cout<<ans;
       return 0;
}