class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        vector<int> curr;
        dfs(nums,target,curr,res,0,0);
        return res;
    }
    void dfs(vector<int>&nums, int target, vector<int>curr, vector<vector<int>>&res,int i,int curr_sum)
    {
        
        if(curr_sum==target)
        {
            res.push_back(curr);
            return;
        }
        if(i>=nums.size()||curr_sum>target)
        return;

        curr.push_back(nums[i]);
        curr_sum+=nums[i];
        dfs(nums,target,curr,res,i,curr_sum);
        curr.pop_back();
        curr_sum-=nums[i];
        dfs(nums,target,curr,res,i+1,curr_sum);
    }
};
