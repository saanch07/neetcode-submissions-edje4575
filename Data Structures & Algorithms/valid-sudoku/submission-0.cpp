class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>>rows(9,vector<bool>(9,false));
        vector<vector<bool>>columns(9,vector<bool>(9,false));
        vector<vector<bool>>box(9,vector<bool>(9,false));
        unordered_map<string,int>mp;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                continue;
                int num=board[i][j]-'1';
                int box_i=(i/3)*3+(j/3);
                if(rows[i][num] || columns[num][j] ||box[box_i][num])
                return false;
                else
                {
                    rows[i][num]=true;
                    columns[num][j]=true;
                    box[box_i][num]=true;
                }
            }   
        }
        return true;

        
    }
};
