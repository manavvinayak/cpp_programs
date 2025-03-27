#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v(5); // declaring size of array
    // Taking input
    for(int i=0; i< 5; i++) {
        cin>>v[i];
    }
    // Showing output
    for(int i=0; i< 5; i++) {
        cout<<v[i]<<" ";
    }
}
