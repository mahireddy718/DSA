class Solution {
public:
bool ispalindrome(string s){
    int l=0,r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r])return false;
        l++;
        r--;
    }
    return true;
}
void backtrack(string s,int index,vector<string>&curr,vector<vector<string>>&ans){
    if(index==s.length()){
        ans.push_back(curr);
        return;
    }
    for(int i=index;i<s.length();i++){
        if(ispalindrome(s.substr(index,i-index+1))){
            curr.push_back(s.substr(index,i-index+1));
            backtrack(s,i+1,curr,ans);
            curr.pop_back();
        }
    }
}

    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>curr;
        backtrack(s,0,curr,ans);
        return ans;
    }
    
};