#include <iostream>
using namespace std;

// start row, start column, ending row, ending column
int maze(int sr,int sc , int er, int ec){
    if(sr > er || sc>ec) return 0;
    if(sr == er && sc == ec) return 1;  
    int rightway = maze(sr, sc +1, er, ec);
      int downway = maze(sr +1, sc , er, ec);
      int totalways = rightway + downway;

}
int main() {
    cout<<maze(0,0,2,3);
                 // 2 rows 3 columns

    // 3 ways                                                                                                                                              
    return 0;
}