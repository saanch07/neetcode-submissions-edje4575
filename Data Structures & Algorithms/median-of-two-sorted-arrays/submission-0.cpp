class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> input;
        for(int i:nums1)
        {
            input.push_back(i);
        }
         for(int i:nums2)
        {
            input.push_back(i);
        }
        sort(input.begin(),input.end());
        int n=input.size();
        if(n%2!=0)
        {
            return input[n/2];
        }
        else
        {
            return double(double(input[n/2])+double(input[(n/2)-1]))/2;
        }



        
    }
};
