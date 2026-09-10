class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        int newstart=newInterval[0];
        int newend=newInterval[1];
        vector<vector<int>>ans;
        int i=0;
        while(i<n&&intervals[i][1]<newstart){
            ans.push_back(intervals[i]);
            i++;
        }
        while(i<n&&intervals[i][0]<=newend){
            newstart=min(intervals[i][0],newstart);
            newend=max(intervals[i][1],newend);
            i++;
        }
        ans.push_back({newstart,newend});
        while(i<n){
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};