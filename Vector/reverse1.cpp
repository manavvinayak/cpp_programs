#include <iostream>
#include <vector>
using namespace std;

int display(vector<int> v) {
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

}

int main() {
    vector<int> v1;
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(8);

    display(v1);
    cout<<endl;
    int i=0;
    int j= v1.size() -1;
    while( i< j){
        swap(v1[i],v1[j]);
        i++;
        j--;
    }
    display(v1);
    
}