class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        vector<int>minD(n,INT_MAX);
        vector<bool>visited(n,false);
        int totalCost=0;
        minD[0]=0;
        for(int i=0;i<n;i++)
        {
            int u=-1;
            for(int j=0;j<n;j++)
            {
                if(!visited[j] &&(u==-1 || minD[j]<minD[u]))
                u=j;
            } 
            visited[u]=true;
            totalCost+=minD[u];
            for(int v=0;v<n;v++)
            {
                if(!visited[v])
                {
                    int c=abs(points[v][0]-points[u][0])+abs(points[v][1]-points[u][1]);
                    minD[v]=min(minD[v],c);
                }
            }
        }
        return totalCost;
    }
};
