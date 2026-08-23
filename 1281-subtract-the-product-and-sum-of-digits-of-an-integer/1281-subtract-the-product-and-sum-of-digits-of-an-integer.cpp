class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,p=1;
        while(n>0){
            int d=n%10;
            sum+=d;
            p*=d;
            n/=10;
        }
        int r=p-sum;
        return r;

    }
};