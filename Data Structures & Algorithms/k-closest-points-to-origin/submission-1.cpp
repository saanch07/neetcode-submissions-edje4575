class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>,greater<pair<int,vector<int>>>> pq;
        for(auto it:points)
        {
            int x=it[0];
            int y=it[1];
            int d=(x*x)+(y*y);
            pq.push({d,it});
            
        }
        int minD=pq.top().first;
        vector<vector<int>> ans;
       
        while(k>0 && !pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
        
        
    }
};
