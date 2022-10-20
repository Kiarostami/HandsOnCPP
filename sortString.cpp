class Solution {
public:
    string sortString(string s) {
        vector<int> hold;
        for(int i = 0; i < s.length(); i++)
        {
            hold.push_back(int(s[i]));
        }
        
        sort(hold.begin(), hold.end());
        std::string str(hold.begin(), hold.end());
        return str;
    }
};
