class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l=0;
        int n1=s1.size();
        int n2=s2.size();
        int k=n1;
        sort(s1.begin(),s1.end());
        // Edge case:
        if(n2<n1){
            return false;
        }
        while(l+k-1<n2){
            string sub=s2.substr(l,k);
            std::sort(sub.begin(),sub.end());
            if(sub==s1){
                return true;
                break;
            } 
            l++ ;

        }
        return false;
        
    }
};
