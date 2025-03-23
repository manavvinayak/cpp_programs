#include <iostream>
using namespace std;
int main() {
    int arr[5];
    // memory allocation is continuous after one array,next array will start from next of end of previous array
    cout<<&arr<<endl;
    // address of a whole array will be equal to address of array's first element index! 
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
}