class Solution {
public:
unordered_map<string,
priority_queue<string,
vector<string>,
greater<string>>>mp;
vector<string> ans;
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        for(auto it:tickets)
        {
            string u=it[0];
            string v=it[1];
            mp[u].push(v);
        }
        
        dfs("JFK");
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
    void dfs(string src)
    {
        while(!mp[src].empty())
        {
            string v=mp[src].top();
            mp[src].pop();
            dfs(v);
        }
        ans.push_back(src);
        
    }
};
