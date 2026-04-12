class Solution {
public:
vector<vector<int>>res;
vector<int> curr;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int total=0;
        sort(nums.begin(),nums.end());
        dfs(nums,target,0,curr,total);
        return res;
    }
    void dfs(vector<int>& nums, int target,int ind,vector<int>& curr,int total)
    {
        if(target==total)
        {
            res.push_back(curr);
            return;
        }
      

        for(int i=ind;i<nums.size();i++)
        {
            if(nums[i]+total>target)
            return;

            curr.push_back(nums[i]);
            dfs(nums,target,i,curr,total+nums[i]);
            curr.pop_back();

        }
    }
};
