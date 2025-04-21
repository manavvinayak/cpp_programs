#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    int str = 2;
    str = '2';
    cout<<typeid(str).name();

}