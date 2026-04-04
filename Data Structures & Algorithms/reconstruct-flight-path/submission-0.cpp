class Solution {
public:
unordered_map<string,priority_queue<string,vector<string>,greater<string>>>mp;
vector<string>ans;
void dfs(string start)
{
    while(!mp[start].empty())
    {
        string v=mp[start].top();
        mp[start].pop();
        dfs(v);
    }
    ans.push_back(start);
}
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        for(auto it:tickets)
        {
            mp[it[0]].push(it[1]);
        }
        dfs("JFK");
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
