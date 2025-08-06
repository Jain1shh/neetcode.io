class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> mpp;

        for(int i = 0; i < n; i++){
            mpp[nums[i]]++;
        }

        vector<int> res;

        for(auto it : mpp){
            if(it.second > n/3){
                res.emplace_back(it.first);
            }
        }
        return res;
    }
};