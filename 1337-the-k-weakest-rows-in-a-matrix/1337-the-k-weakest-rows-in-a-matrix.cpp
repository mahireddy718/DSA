class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<mat.size();i++){
            int soldiers=0;
            for(int j=0;j<mat[i].size();j++){
                soldiers+=mat[i][j];
            }
            pq.push({soldiers,i});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>ans(k);
        for(int i=k-1;i>=0;i--){
            ans[i]=pq.top().second;
            pq.pop();
        }
        return ans;

    }
};