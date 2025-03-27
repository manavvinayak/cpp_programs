#include <iostream>
#include <vector>
using namespace std;

int display(vector<int> v) {
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
vector<int> v1;

void reversePart(int i, int j, vector<int> & v) {
    
     while( i<= j) {
           int temp = v[i];
           v[i] = v[j];
           v[j] = temp;
            i++;
            j--;
     }
    return ;
    }
int main() {
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(8);
    display(v1);
    int k;
    cin>>k;
    // Rotating our array
    int n = v1.size();
    reversePart(0, n-k-1,v1);
    reversePart(n-k, n-1,v1);
    reversePart(0, n-1,v1);
    display(v1);

}