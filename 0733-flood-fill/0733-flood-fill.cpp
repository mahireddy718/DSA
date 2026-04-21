class Solution {
private:
    void dfs(int sr, int sc,int initcol,int color,vector<vector<int>>& image,vector<vector<int>>& ans,int drow[],int dcol[]){
        ans[sr][sc]=color;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){
            int nrow=sr+drow[i];
            int ncol=sc+dcol[i];
            if(nrow>=0&&nrow<n&&ncol<m&&ncol>=0&&image[nrow][ncol]==initcol&&ans[nrow][ncol]!=color){
                dfs(nrow,ncol,initcol,color,image,ans,drow,dcol);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans=image;
        int initcol=image[sr][sc];
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        dfs(sr,sc,initcol,color,image,ans,drow,dcol);
        return ans;
    }
};