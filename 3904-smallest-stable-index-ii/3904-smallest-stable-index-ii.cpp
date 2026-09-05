class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>smalltillnow(n),largetillnow(n);
        largetillnow[0]=nums[0];
        for(int i=1;i<n;i++){
            largetillnow[i]=max(largetillnow[i-1],nums[i]);
        }
        smalltillnow[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            smalltillnow[i]=min(smalltillnow[i+1],nums[i]);
        }
        for(int i=0;i<n;i++){
            if(largetillnow[i]-smalltillnow[i]<=k){
                return i;
            }
        }
        return -1;
    }
};