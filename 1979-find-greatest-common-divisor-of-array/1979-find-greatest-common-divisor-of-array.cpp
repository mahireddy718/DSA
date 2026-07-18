class Solution {
public:
int gcd(int a, int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
    int findGCD(vector<int>& nums) {
        int small=nums[0],large=nums[0];
        for(int i=1;i<nums.size();i++){
            small=min(small,nums[i]);
            large=max(large,nums[i]);
        }
        int ans=gcd(small,large); 
        return  ans;
    }
};