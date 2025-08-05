class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;

        for(auto x : nums){
            umap[x]++;
        }

        vector<pair<int,int>> temp;

        for(auto x : umap){
            temp.emplace_back(x.second, x.first);
        }
        
        sort(temp.rbegin(), temp.rend());

        vector<int> res;

        for(int i = 0; i < k; i++){
            res.emplace_back(temp[i].second);
        }

        return res;
    }
};