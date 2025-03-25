// vector is a dynamic array 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> arr; // no need to mention size which makes it distinguish from array
    arr.push_back(6);
    arr.push_back(1);
    arr.push_back(9);
    cout<<arr[0];
    // on push_back vector technically its capacity to double of it
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr.capacity()<<endl;
    cout<<arr[2]<<endl;
    cout<<arr.capacity()<<endl;
    // while inserting/ input, don't use [],instead use push_back


}