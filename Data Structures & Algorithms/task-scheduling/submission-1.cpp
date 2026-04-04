class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(26,0);
        for(char c:tasks)
        {
            freq[c-'A']++;
        }
        sort(freq.rbegin(),freq.rend());
        int maxf=freq[0];
        int count=0;
        for(int i:freq)
        {
            if(i==maxf)
            count++;
        }
        int ans=(maxf-1)*(n+1)+count;
        int t=tasks.size();
        return max(ans,t);
        
    }
};
