#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int X;
    cin>>N>>X;
    int A[N];
    bool flag = false; //  X is not found
    for(int i=0; i< N; i++) {
        cin>>A[i];
        if(A[i] == X){
            flag = true;
            cout<<"YES";
            break;
        }
    }
    if(flag == false){
          cout<<"NO";
    }
  
}
