class Solution {
public:
    bool isPalindrome(string s) {
        //from stackoverflow
            s.erase(std::remove_if(s.begin(), s.end(), []( auto const& c ) -> bool { return !std::isalnum(c); } ), s.end());
        //
        
        for(int i = 0; i < s.length()/2; i++)
        {
            if(tolower(s[i]) != tolower(s[s.length()-1-i])) return false;
        }
        return true;
    }
};
