class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        vector<int> dr={-1,1,0,0};
        vector<int> dc={0,0,-1,1};
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> min_h;
        min_h.push({grid[0][0],0,0});
        visited[0][0]=true;
    
        while(!min_h.empty())
        {
            auto curr=min_h.top();
            min_h.pop();
            int t=curr[0];
            int r=curr[1];
            int c=curr[2];
            if(r==n-1 && c==m-1)
            return t;
            for(int i=0;i<4;i++)
            {
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && !visited[nr][nc])
                {
                    visited[nr][nc]=true;
                    min_h.push({max(t,grid[nr][nc]),nr,nc});
                }

            }

        }
        return n*n;
        
    }
};
