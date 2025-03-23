#include <iostream>
using namespace std;

int main() {
    int n = 5; // Size of the array
    int arr[5];

    // Input loop: Store elements in the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Output loop: Print all elements of the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}


