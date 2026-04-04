class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>> mp;
        vector<int>indegree(numCourses,0);
        for(auto it:prerequisites)
        {
            int u=it[1];
            int v=it[0];
            indegree[v]++;
            mp[u].push_back(v);
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++)
        {
            if(indegree[i]==0)
            q.push(i);
        }
        vector<int> order;
        while(!q.empty())
        {
            int c=q.front();
            q.pop();
            order.push_back(c);
            for(auto it:mp[c])
            {
                indegree[it]--;
                if(indegree[it]==0)
                q.push(it);
            }
        }
        if(order.size()!=numCourses)
        return {};
        else
        return order;
        
    }
};
