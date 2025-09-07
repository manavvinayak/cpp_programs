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

// printing the path that how much path it'll take to reach the destination on maze
void printPath(int sr,int sc , int er, int ec, string s){
    if(sr > er || sc > ec) return;
    if(sr == er && sc == ec){
        cout<<s<<endl;
        return;
    }
    printPath(sr, sc +1, er, ec, s +'R');
    printPath(sr +1, sc , er, ec, s +'D');

}
int main() {    
    printPath(1,1,3,3,"");
                 // 2 rows 3 columns

    // 3 ways                                                                                                                                              
    return 0;
}