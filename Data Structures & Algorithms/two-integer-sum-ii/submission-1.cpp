class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        sort(numbers.begin(),numbers.end());
        int l=0;
        int r=numbers.size()-1;
        while(l<r)
        {
            if(numbers[l]+numbers[r]<target)
            l++;
            else if(numbers[l]+numbers[r]>target)
            r--;
            else
            return{l+1,r+1};
        }
        return{-1,-1};
        // unordered_map<int,int>mp;
        // int n=numbers.size();
        // for(int i=0;i<n;i++)
        // {
        //     mp[numbers[i]]=i;
        // }
        // for(int i=0;i<n;i++)
        // {
        //     int t=target-numbers[i];
        //     if(mp.count(t))
        //     {
        //         return{i+1,mp[t]+1};
        //     }
        // }
        // return{-1,-1};
        
    }
};
