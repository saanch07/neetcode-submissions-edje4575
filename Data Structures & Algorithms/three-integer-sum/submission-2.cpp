class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<1)
        return {{0,0,0}};
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]--;
            if(i>0 && nums[i]==nums[i-1])
            continue;
            for(int j=i+1;j<nums.size();j++)
            {
                mp[nums[j]]--;
                if(j>i+1 && nums[j]==nums[j-1])
                {
                    mp[nums[j]]++;
                    continue;
                }
                int t=-(nums[j]+nums[i]);
                if(t>=nums[j]&&mp[t]>0)
                {
                    ans.push_back({nums[i],nums[j],t});
                }
                mp[nums[j]]++;
            }
            
        }
        return ans;

        
    }
};
