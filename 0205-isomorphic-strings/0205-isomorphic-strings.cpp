class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>m1,m2;
        for(int i=0;i<s.size();i++){
            int c1=s[i];
            int c2=t[i];
            if(m1.count(c1)&&c2!=m1[c1]){
                return false;
            }
            if(m2.count(c2)&&c1!=m2[c2]){
                return false;
            }
            m1[c1]=c2;
            m2[c2]=c1;
        } 
        return true;

    }
};