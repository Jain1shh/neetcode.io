class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ctn0 = 0;
        int ctn1 = 0;
        int ctn2 = 0;

        for(int num : nums){
            if(num == 0) ctn0++;
            if(num == 1) ctn1++;
            if(num == 2) ctn2++;
        }

        int ctr = 0;

        for(int i = 0; i < ctn0; i++){
            nums[ctr++] = 0;
        }

        for(int i = 0; i < ctn1; i++){
            nums[ctr++] = 1;
        }

        for(int i = 0; i < ctn2; i++){
            nums[ctr++] = 2;
        }
    }
};