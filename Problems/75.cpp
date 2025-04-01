class Solution {
    public:
        void sortColors(vector<int>& nums) {
            // two pass solution
            int n = nums.size();
            int noz = 0;
            int no1 = 0;
            int no2 = 0;
            for(int i=0; i< n; i++) {
                if(nums[i] == 0) noz++;
                else if(nums[i] == 1) no1++;
                else if(nums[i] ==2) no2++;
            }
            // Filling the elements
            for(int i=0; i< n; i++) {
                if (i < noz) nums[i] = 0;
                else if( i < (noz + no1)) nums[i] = 1;
                else nums[i] = 2;
            }
            return;
        }
    };