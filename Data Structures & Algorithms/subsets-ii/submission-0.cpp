class Solution {
public:
vector<vector<int>>res;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>curr;
        dfs(nums,0,curr);
        return res;
    }
    void dfs(vector<int>&nums, int i, vector<int>&curr)
    {
            res.push_back(curr);
        
        for(int j=i;j<nums.size();j++)
        {
            if(j>i && nums[j]==nums[j-1])
            continue;

            curr.push_back(nums[j]);
            dfs(nums,j+1,curr);
            curr.pop_back();
          
        }
    }
};
