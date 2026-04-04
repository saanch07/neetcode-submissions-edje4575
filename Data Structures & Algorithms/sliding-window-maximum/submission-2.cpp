class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> maxElements;
        int maxE=nums[0];
        priority_queue<pair<int,int>> pq;
        int l=0;
        for(int r=0;r<nums.size();r++)
        {
            
            pq.push({nums[r],r});
             if (r >= k - 1) {
                // 3. CLEANUP: Remove the top element if its index is outside the window
                // The window starts at index (r - k + 1)
                while (pq.top().second < r - k + 1) {
                    pq.pop();
                }
                
                // 4. Now the top is guaranteed to be the max within the current window
                maxElements.push_back(pq.top().first);
            }
        }
        return maxElements;
        
    }
};
