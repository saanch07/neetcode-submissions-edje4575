class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
       
        queue<pair<int,int>>q;int c=0;
        int dr[]={-1,0,1,0};
        int dc[]={0,-1,0,1};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0])
                {
                    if(backtrack(board,word,i,j,0))
                    return true;
                }
            }
        }
        return false;
        
    }
    bool backtrack(vector<vector<char>>& board, string word,int i, int j, int c)
    {
        if(c==word.length())
        return true;
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size()||c>word.length()||board[i][j]!=word[c])
        return false;

        char t=board[i][j];
        board[i][j]='#';

        bool found=backtrack(board,word,i+1,j,c+1)||
        backtrack(board,word,i-1,j,c+1)||
        backtrack(board,word,i,j+1,c+1)||
        backtrack(board,word,i,j-1,c+1);

        board[i][j]=t;
        return found;

    }
};
