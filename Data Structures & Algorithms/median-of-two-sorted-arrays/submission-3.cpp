class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        priority_queue<double>maxH;
        priority_queue<double,vector<double>,greater<double>>minH;
        int n=nums1.size();
        int m=nums2.size();
        for(int i:nums1)
        {
            maxH.push(i);
        }
        for(int i:nums2)
        {
            maxH.push(i);
        }
        while(maxH.size()>minH.size()+1)
        {
            minH.push(maxH.top());
            maxH.pop();
        }
        if((n+m)%2!=0)
        return maxH.top();
        else
        return (maxH.top()+minH.top())/2.0;

        
        

        
    }
};
