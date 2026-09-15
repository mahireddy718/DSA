class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int t=0;
        for(int i=1;i<timeSeries.size();i++){
            t+=min(duration,timeSeries[i]-timeSeries[i-1]);
        }
        t+=duration;
        return t;
    }
};