// Basic Approach
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b;
    
}


// if taking external variav=ble isn't allowed
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<a<<" "<<b;
    
}
