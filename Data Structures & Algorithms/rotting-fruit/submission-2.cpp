class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int minutes=0,n_fresh=0;
        queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        int dr[4]={-1,0,0,1};
        int dc[4]={0,1,-1,0};

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2 )
                {
                    q.push({i,j});
                }
                if(grid[i][j]==1)
                {
                    n_fresh++;
                }

            }
        }
       
        if(n_fresh==0)
        return minutes;

        while(!q.empty())
                    {
                        int rotten=q.size();
                        bool turn=false;
                        for(int i=0;i<rotten;i++)
                        {
                            int r=q.front().first;
                            int c=q.front().second;
                            q.pop();
                            
                            for(int d=0;d<4;d++)
                            {
                                int nr=r+dr[d];
                                int nc=c+dc[d];
                                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1)
                                {
                                    grid[nr][nc]=2;
                                    turn=true;
                                    n_fresh--;
                                    q.push({nr,nc});
                                }
                            }

                        }
                        
                        if(turn)
                        minutes++;
                        if(n_fresh==0)
                        break;
                    }
                    if(n_fresh>0)
                    return -1;
                    else
                    return minutes;
        
    }
};
