class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        // unordered_map<char,int>mpp;
        // for(int i=0;i<s.length();i++){
        //     mpp[s[i]]++;
        // }
        // for(int i=0;i<s.length();i++){
        //     if(mpp[s[i]]==1)return i;
        // }
        // return -1;

        vector<int>freq(26,0);
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            if(freq[s[i]-'a']==1)return i;
        }
        return -1;
    }
};