#include <iostream>
using namespace std;

// We have Source, Helper & Destination rode
void hanoi(int n,char s, char h, char d){
    if(n == 0) return;
    hanoi(n-1, s, d, h );
    cout<<s<<" ->"<<d<<endl;
    hanoi( n-1, h, s, d);

}

// n is no. of disks
int main() {
    int n = 3;
    hanoi(n,'S','H','D');
    return 0;
}