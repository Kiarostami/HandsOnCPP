class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        bool paliFlag = true;
        for(auto x : words)
        {
            paliFlag = true;
            for(int i = 0; i < x.length()/2; i++)
            {
                if(x[i] != x[x.length()-1-i]) paliFlag = false;
            }
            if(paliFlag == true) return x;
        }
        return "";
    }
};
