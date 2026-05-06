class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            
            int t=target-nums[i];
            if(mp.find(t)!=mp.end() && i!=mp[t])
            {
                res.push_back(i);
                res.push_back(mp[t]);
                break;
            }
        }
        return res;
        
    }
};
