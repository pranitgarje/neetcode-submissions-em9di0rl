class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums;
        }
        int nums1=-1;
        int nums2=-1;
        int c1=0;
        int c2=0;
        for(int el:nums){
            if(el==nums1) c1++ ;
            else if(el==nums2) c2++ ;
            else if(c1==0){
                nums1=el;
                c1=1;
            }
            else if(c2==0){
                nums2=el;
                c2=1;
            }
            else{
                c1-- ;
                c2-- ;
            }
        }
        vector<int> ans;
        c1=0;
        c2=0;
        for(int el:nums){
            if(el==nums1) c1++;
            else if(el==nums2) c2++ ;
        }
        if(c1>n/3) ans.push_back(nums1);
        if(c2>n/3) ans.push_back(nums2);
        return ans;
    }
};