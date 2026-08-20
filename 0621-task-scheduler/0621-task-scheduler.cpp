class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(26,0);
        for(int i=0;i<tasks.size();i++){
            freq[tasks[i]-'A']++;
        }
        int maxfreq=0;
        for(int num:freq){
            maxfreq=max(num,maxfreq);
        }
        int countm=0;
        for(int num:freq){
            if(num==maxfreq)countm++;
        }
        int r=(maxfreq-1)*(n+1)+countm++;
        return max((int)tasks.size(),r);
    }
};