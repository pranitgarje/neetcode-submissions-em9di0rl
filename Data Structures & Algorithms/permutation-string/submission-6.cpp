class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int n1=s1.size();
       int n2=s2.size();
       
       if(n1>n2) return false;
       unordered_map<char,int> count1;
      
       for(char c:s1){
        count1[c]++ ;
       }
       int need=count1.size();
       for(int i=0;i<n2;i++){
         unordered_map<char,int> count2;
         int curr=0;
        for(int j=i;j<n2;j++){
            count2[s2[j]]++ ;
            if(count1[s2[j]]<count2[s2[j]]){
                break;
            }
            if(count1[s2[j]]==count2[s2[j]]){
                curr++ ;
                 
            }
            if(curr==need){
                 return true;
            }
            
           
        }
       }
       return false;

    }
};
