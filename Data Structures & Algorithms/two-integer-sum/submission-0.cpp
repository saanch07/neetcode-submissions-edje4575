class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int n=nums[i];
            int t=target-n;
            if(mp.find(t)!=mp.end())
            return {mp[t],i};
            else
            mp[nums[i]]=i;
        }
        return {-1,-1};
        
    }
};
