class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        unordered_map<int,vector<pair<int,int>>>mp;
        for(auto it:times)
        {
            int u=it[0];
            int v=it[1];
            int t=it[2];
            mp[u].push_back({v,t});
        }

        priority_queue<pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>>pq;
        pq.push({0,k});
        vector<int>dist(n+1,INT_MAX);
        dist[k]=0;
        while(!pq.empty())
        {
            int u=pq.top().second;
            int time=pq.top().first;
            pq.pop();

            for(auto it:mp[u])
            {
                int v=it.first;
                int t=it.second;
                if(time+t<dist[v])
                {
                    dist[v]=time+t;
                    pq.push({dist[v],v});
                    
                }
            }
        
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(dist[i]==INT_MAX)
            return -1;
            
            ans=max(ans,dist[i]);
        }
        return ans;
    }
};
