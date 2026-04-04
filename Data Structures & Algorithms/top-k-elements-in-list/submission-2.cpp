class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<vector<int>>bucket(n+1);
        unordered_map<int,int>mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        for(auto it:mp)
        {
            int ind=it.second;
            int num=it.first;
            bucket[ind].push_back(num);
        }
        //{0},{1},{2},{3}
        vector<int>ans;
        int ind=n;
        while(k!=0 && ind>0)
        {
            for(int i:bucket[ind])
            {
                ans.push_back(i);
                k--;
            }
            ind--;
        }
        return ans;
        
    }
};
