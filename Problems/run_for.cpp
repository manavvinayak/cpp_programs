// Chef is participating in a race of 
// Y
// Y kilometers. However, Chef gets tired and needs to take a rest after every 
// X
// X kilometers.
// Input Format
// The only line of input contains two space-separated integers 
// X
// X and 
// Y
// Y — the number of kilometers Chef can run before needing a rest, and the total distance of the race in kilometers.

// Output Format
// Print a single integer — the number of times Chef will stop to rest before completing the race.
#include <iostream>
using namespace std;
int main() {
    int X,Y;
    cin>>X>>Y;
    int rest =0;
    for(int i=0; i< Y; i+=X){
        
        rest++;
    }
    cout<<rest-1;
}