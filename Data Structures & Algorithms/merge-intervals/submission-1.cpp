class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>res;
        sort(intervals.begin(),intervals.end());
        res.push_back({intervals[0][0],intervals[0][1]});
        int c=0;
        if(intervals.size()==1)
        return res;
        for(int i=1;i<intervals.size();i++)
        {
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(res[c][1]>=start )
            {
                res[c][0]=min(res[c][0],start);
                res[c][1]=max(res[c][1],end);
            }
            else
            {
                res.push_back({start,end});
                c++;
            }
        }
        return res;
        
    }
};
