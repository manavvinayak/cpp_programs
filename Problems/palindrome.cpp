#include <iostream>
using namespace std;
int x;
bool isPalindrome(int x) {
    
    long reverse = 0;
    int copy = x;
    if(x < 0) {
        return false;
    }
    while( x > 0){
        reverse = (reverse * 10) + (x % 10);
        x = x / 10;
    }
    return reverse == copy;
}
int main() {
    
    
    cin >> x;
    if (isPalindrome(x)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
    return 0;

}