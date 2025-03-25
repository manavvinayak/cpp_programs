#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v(4,6); // Initial size of vector is defined i.e. 4 and each element is provided the given i.e. 6
     cout<<v[2]<<" ";
     cout<<v[1]<<" ";
     cout<<v.capacity();

}
