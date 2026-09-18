class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size()>n-1)
        return false;
        unordered_set<int> visit;
        queue<pair<int,int>>q;
        q.push({0,-1});//node,parent
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        visit.insert(0);
        while(!q.empty())
        {
            int node=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(int i:adj[node])
            {
                if(i==parent)
                continue;
                if(visit.count(i))
                return false;

                visit.insert(i);
                q.push({i,node});
            }
        }
        return visit.size()==n;


    }
};
