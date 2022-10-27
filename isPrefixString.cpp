class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string hold = "";
        for(int i = 0; i < words.size(); i++)
        {
            hold += words[i];
            if (s == hold) return true;
        }
        return false;
    }
};
