#include <iostream>
using namespace std;
// int main() {
//     // using inbuilt function
//     int x,y;
//     cin>>x>>y;
//     cout<<min(x,y)<<endl;
//     cout<<max(x,y);
// }

int mini(int x, int y){
    int a;
    if(x < y) a = x;
    else a = y;
    return a;
}
int main() {
    int x,y;
    cin>>x>>y;
    cout<<mini(x,y);

}

