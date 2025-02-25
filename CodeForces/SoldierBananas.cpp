#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    // Calculate the total cost of bananas
    int total_cost = k * w * (w + 1) / 2;

    // Calculate the amount of money the soldier needs to borrow
    int borrow = total_cost - n;

    // If the soldier doesn't need to borrow any money, print 0
    if (borrow > 0) {
        cout << borrow << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}