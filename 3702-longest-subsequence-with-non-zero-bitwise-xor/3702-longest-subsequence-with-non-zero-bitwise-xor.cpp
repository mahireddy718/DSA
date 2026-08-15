class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr=0;
        int n=nums.size();
        bool nonzero=false;
        for(int i=0;i<nums.size();i++){
            xr^=nums[i];
            if(nums[i]!=0){
                nonzero=true;  
            }
        }
        if(xr!=0)return n;
        if(nonzero)return n-1;
        return 0;
    }
};