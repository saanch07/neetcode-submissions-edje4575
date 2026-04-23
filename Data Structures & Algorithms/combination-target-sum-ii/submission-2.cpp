class Solution {
public:
vector<vector<int>>res;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<int>curr;
        sort(candidates.begin(),candidates.end());
        dfs(candidates,target,0,0,curr);
        return res;
        
    }
    void dfs(vector<int>& candidates, int target, int i, int curr_sum, vector<int>& curr)
    {
        if(curr_sum==target)
        {
            res.push_back(curr);
            return;
        }
        if(i>=candidates.size() || curr_sum>target)
        return;

        curr_sum+=candidates[i];
        curr.push_back(candidates[i]);
        dfs(candidates,target,i+1,curr_sum,curr);
        curr_sum-=candidates[i];
        curr.pop_back();
        while(i+1<candidates.size() && candidates[i]==candidates[i+1])
        i++;

        dfs(candidates,target,i+1,curr_sum,curr);

    }
};
