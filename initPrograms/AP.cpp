// Display ap upto given number of terms
#include <iostream>
using namespace std;
int main() {
    int n;
    // for series 1,3,5,7........ 'n' terms
    cout<<"Enter a number: ";
    cin>>n;
    for(int i = 1; i<= (2*n-1) ;i+=2)
    {
        cout<<i<<endl;
    }
    return 0;
}