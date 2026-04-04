class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>mp;
        vector<int> indegree(numCourses,0);
        for(auto &it:prerequisites)
        {
            int v=it[0];
            int u=it[1];
            mp[u].push_back(v);
            indegree[v]++;
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++)
        {
            if(indegree[i]==0)
            q.push(i);
        }
        int count=0;
        while(!q.empty())
        {
            int c=q.front();
            q.pop();
            count++;
            for(auto it:mp[c])
            {
                indegree[it]--;
                if(indegree[it]==0)
                q.push(it);
            }
        }
        if(count==numCourses)
        return true;
        else
        return false;
        
    }
};
