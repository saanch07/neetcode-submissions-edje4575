class Solution {
public:
vector<int> dr={-1,0,1,0};
vector<int> dc={0,1,0,-1};
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int r=heights.size();
        int c=heights[0].size();
        vector<vector<int>>res;
        vector<vector<bool>>pac(r,vector<bool>(c,false));
        vector<vector<bool>>alt(r,vector<bool>(c,false));
        queue<pair<int,int>>pac_q;
        queue<pair<int,int>>alt_q;
        for(int i=0;i<c;i++)
        {
            pac_q.push({0,i});
            alt_q.push({r-1,i});

        }
        for(int i=0;i<r;i++)
        {
            pac_q.push({i,0});
            alt_q.push({i,c-1});
        }
        bfs(heights,pac,pac_q);
        bfs(heights,alt,alt_q);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(pac[i][j]&& alt[i][j])
                res.push_back({i,j});
            }
        }
        return res;
    }
    void bfs(vector<vector<int>>&heights, vector<vector<bool>>&ocean, queue<pair<int,int>> &q)
    {
        while(!q.empty())
        {
            auto cr=q.front();
            q.pop();
            int r=cr.first;
            int c=cr.second;
            ocean[r][c]=true;
            for(int i=0;i<4;i++)
            {
                int nr=dr[i]+r;
                int nc=dc[i]+c;
                if(nr>=0
                &&
                nr<heights.size() 
                && nc>=0 
                && nc<heights[0].size() && !ocean[nr][nc] && heights[nr][nc]>=heights[r][c])
                {
                    q.push({nr,nc});
                }
            }

        }


    }
};
