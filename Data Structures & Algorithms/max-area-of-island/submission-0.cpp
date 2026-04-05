class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxA=0;
        int m=grid.size();
        int n=grid[0].size();
        int dr[]={-1,0,1,0};
        int dc[]={0,-1,0,1};
        queue<pair<int,int>>q;
        vector<vector<int>>vis(m,vector<int>(n,0));

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1 && !vis[i][j])
                {
                    int area=1;
                    q.push({i,j});
                    vis[i][j]=1;
                    while(!q.empty())
                    {
                        int r=q.front().first;
                        int c=q.front().second;
                        q.pop();
                        for(int i=0;i<4;i++)
                        {
                            int nr=r+dr[i];
                            int nc=c+dc[i];
                            if(nr>=0 && nc<n && nr<m && nc>=0 && !vis[nr][nc] && grid[nr][nc]==1)
                            {
                                area++;
                                
                                q.push({nr,nc});
                                vis[nr][nc]=1;
                            }
                        }
                    }
                    maxA=max(maxA,area);
                }
                
            }

        }
        return maxA;
        
    }
};
