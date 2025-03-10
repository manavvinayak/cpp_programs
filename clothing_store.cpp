#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
    while (t--) {
        int x, y, z, a, b, c; 
        cin >> x >> y >> z >> a >> b >> c;
        
        int happy = 0;

        int takeS = min(x, a); 
        x -= takeS;
        a -= takeS;
        happy += takeS;

        int takeL = min(y, b); 
        y -= takeL;
        b -= takeL;
        happy += takeL;

        int takeXL = min(z, c); 
        z -= takeXL;
        c -= takeXL;
        happy += takeXL;

        int fromXLtoL = min(z, b);
        z -= fromXLtoL;
        b -= fromXLtoL;
        happy += fromXLtoL;

        int fromLtoS = min(y, a);
        y -= fromLtoS;
        a -= fromLtoS;
        happy += fromLtoS;

        int fromXLtoS = min(z, a);
        z -= fromXLtoS;
        a -= fromXLtoS;
        happy += fromXLtoS;

        cout << happy << endl;
    }
    return 0;

}