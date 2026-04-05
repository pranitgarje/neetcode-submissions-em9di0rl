class TimeMap {
public:
map<string,vector<pair<int,string>>> mpp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mpp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        // mpp is sorted.need to find the timestamp in vector mpp[key] using binary search in O(Logn)
        int l=0;
        int r=mpp[key].size()-1;
        string res="";
        while(l<=r){
            int m=l+(r-l)/2;
            if(mpp[key][m].first<=timestamp){
                res=mpp[key][m].second;
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        return res;
        
    }
};
