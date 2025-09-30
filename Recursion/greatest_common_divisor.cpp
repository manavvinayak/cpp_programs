#include <iostream>
#include <vector>
using namespace std;
 
int gcd(int a, int b){
    int answer=0;

    for(int i=1; i < b; i++){
        if(a%i == 0 && b%i ==0) {
            answer = i;
            
        }
    }
    return answer;
}

int gcdrec(int a, int b){
    if(a == 0) return b;
    else return gcdrec(b%a, a);
}
int main() {
    int a = 12;
    int b = 64;
    cout<<gcd(a,b);
}