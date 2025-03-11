#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int N;
	cin>>N;
	int A[N];
	for(int i=0; i<N; i++){
	    cin>>A[i];
	}
	cout<<*max_element(A, A + N);
//     The expression *max_element(heights, heights + N) is part of the C++ <algorithm> library and is used to find the maximum element in a range.
// A: This is the name of the array that contains the elements (in this case, the heights of the mountains).

// A + N: This is a pointer that points to one element past the end of the array.

// The function max_element takes two arguments: the beginning and end of the range. It returns an iterator to the maximum element in that range. By dereferencing the iterator with *, you get the actual value of the maximum element.

// So, *max_element(heights, heights + N) finds the maximum value in the array heights that has N elements and returns that value.
}
