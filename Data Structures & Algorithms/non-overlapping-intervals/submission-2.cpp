class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()==1)
        return 0;

        sort(intervals.begin(),intervals.end());

        int start=intervals[0][0];
        int end=intervals[0][1];
        int clash=0;
        for(int i=1;i<intervals.size();i++)
        {
            if(end>intervals[i][0])
            {
                clash++;
                end=min(end,intervals[i][1]);
            }
            else
            end=intervals[i][1];
        }
        return clash;
        
    }
};
