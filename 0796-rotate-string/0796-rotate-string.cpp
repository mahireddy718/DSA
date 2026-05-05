class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())return false;
        string f=s+s;
        return f.find(goal)!=-1;    
    }
};