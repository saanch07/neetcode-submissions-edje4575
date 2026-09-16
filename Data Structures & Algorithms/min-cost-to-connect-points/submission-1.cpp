class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        int res=0;
        vector<int>minD(n,INT_MAX);
        vector<bool>visited(n,false);
        int node=0;
        int edge=0;

        while(edge<n-1)
        {
            visited[node]=true;
            int nextnode=-1;
            for(int i=0;i<n;i++)
            {
                if(visited[i])
                continue;

                int currD=abs(points[i][0]-points[node][0])
                +abs(points[i][1]-points[node][1]);

                minD[i]=min(minD[i],currD);

                if(nextnode==-1 || minD[i]<minD[nextnode])
                {
                    nextnode=i;
                }
            }

            res+=minD[nextnode];
            node=nextnode;
            edge++;
        }
        return res;
        
    }
};
