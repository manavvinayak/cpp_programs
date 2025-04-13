  #include <iostream>
  using namespace std;
  
  int main() {
     int m;
     cout<<"Enter rows of 1st matrix: ";
     cin>>m;
     int n;
     cout<<"Enter col of 1st matrix: ";
     cin>>n;

     int p;
     cout<<"Enter rows of 2nd matrix: ";
     cin>>p;
     int q;
     cout<<"Enter col of 2nd matrix: ";
     cin>>q;
     if(n ==p) {
          int a[m][n];
          cout<<"Enter elements of 1st matrix: ";
          for(int i=0; i< m; i++){
            for(int j=0; j< n; j++) {
                cin>>a[i] [j];
            }
          }
          int b[p][q];
          cout<<"Enter elements of 2nd matrix: ";
          for(int i=0; i< p; i++){
            for(int j=0; j< q; j++) {
                cin>>b[p] [q];
            }
          }

          // Resultant Matrix
          int res[m] [q];
          for(int i=0; i< m; i++){
            for(int j=0; j < q; j++) {
                res [i] [j] = 0;
                // Multiply
                for(int k=0; k <p; k++  ) {
                  res[i] [j] += a[i] [k] * b[k] [j];
                }
            }
            cout<<endl;
          }

     }
     else {
        cout<<"Matrices can't be applied!";
     }
  }