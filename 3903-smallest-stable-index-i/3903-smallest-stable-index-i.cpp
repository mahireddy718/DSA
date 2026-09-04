class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>smalltillnow(n),largesttillnow(n);
        largesttillnow[0]=nums[0];
        for(int i=1;i<n;i++){
            largesttillnow[i]=max(largesttillnow[i-1],nums[i]);
        }
        smalltillnow[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            smalltillnow[i]=min(smalltillnow[i+1],nums[i]);
        }
        for(int i=0;i<n;i++){
            if((largesttillnow[i]-smalltillnow[i])<=k){
                return i;
            }
        }
        return -1;
    }
};