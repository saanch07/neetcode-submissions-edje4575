class TimeMap {
public:
  unordered_map<string,
        unordered_map<int,string>> mp;
    TimeMap() {    
    }
    
    void set(string key, string value, int timestamp) {
        mp[key][timestamp]=value;
        
    }
    //a,1,h
    //a,3,s
    
    string get(string key, int timestamp) {
        if(mp.find(key)==mp.end())
        return "";
        int seen=0;
        for( auto it:mp[key])
        {
            int t=it.first;
            if(t<=timestamp)
            seen=max(seen,t);
        }
        return (seen==0)?"":mp[key][seen];


        
    }
};
