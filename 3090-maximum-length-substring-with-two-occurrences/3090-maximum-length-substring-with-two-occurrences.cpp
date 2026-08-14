class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>mpp;
        int l=0,maxi=0;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
            while(mpp[s[i]]>2){
                mpp[s[l]]--;
                if(mpp[s[l]]==0)mpp.erase(s[l]);
                l++;
            }
            maxi=max(maxi,i-l+1);
        }
        return maxi;
    }
};