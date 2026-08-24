class Solution {
public:
void subset(vector<int>& nums,int i,vector<int>& small,vector<vector<int>>&ans){
    if(i==nums.size()){
        ans.push_back(small);
        return;
    }
    small.push_back(nums[i]);
    subset(nums,i+1,small,ans);
    small.pop_back();
    subset(nums,i+1,small,ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>small;
        int i=0;
        subset(nums,i,small,ans);
        return ans;
    }
};