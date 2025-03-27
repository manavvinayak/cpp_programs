#include <iostream> 
#include <vector>
using namespace std;

int main() {
    vector <int> v; // declaring size of array
    // Taking input
    for(int i=0; i< v.size(); i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    // Showing output
    for(int i=0; i< v.size(); i++) {
        cout<<v[i]<<" ";
    }
}
