class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int count=0,prefixsum=0;
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            int rem=((prefixsum%k)+k)%k;
            count+=mpp[rem];
            mpp[rem]++;
        } 
        return count;
    }
};