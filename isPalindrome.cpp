class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        auto sX = to_string(x);
        for(int i = 0; i < sX.length()/2; i++)
        {
            if(sX[i] != sX[sX.length()-1-i]) return false;
        }
        return true;
    }
};
