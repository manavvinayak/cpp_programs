class Solution {
    public:
        int subtractProductAndSum(int n) {
            int copy1=n,copy2=n;
            int prod = 1;
            int sum = 0;
            while(copy1>0) {
                int z = copy1%10;
               copy1 = copy1/10;
               prod = prod *z;
            }
            while(copy2>0) {
               int x = copy2%10;
             copy2 = copy2/10;
             sum = sum + x;
            }
             
            
            int diff = prod - sum;
            return  diff;
        }
       
    };