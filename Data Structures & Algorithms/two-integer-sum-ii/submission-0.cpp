class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>mp;
        int n=numbers.size();
        for(int i=0;i<n;i++)
        {
            mp[numbers[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            int t=target-numbers[i];
            if(mp.count(t))
            {
                return{i+1,mp[t]+1};
            }
        }
        return{-1,-1};
        
    }
};
