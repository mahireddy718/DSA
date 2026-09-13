class Solution {
public:
    int compress(vector<char>& chars) {
        string ans;
        int j=0;
        for(int i=0;i<chars.size();i++){
            char ch=chars[i];
            int count=0;
            while(i<chars.size()&&chars[i]==ch){
                i++;
                count++;
            }
            i--;
            chars[j]=ch;
            j++;
            if(count>1){
                string s=to_string(count);
                for(char c:s){
                    chars[j]=c;
                    j++;
                }
            }
        }
        return j;
    }
};