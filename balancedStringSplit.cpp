class Solution {
public:
    int balancedStringSplit(string s) {
        
        int RC = 0;
        int LC = 0;
        int ans = 0;
        
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'R')
            {
                RC++;
                if(RC == LC) ans++;
            }
            else
            {
                LC++;
                if(RC == LC) ans++;
            }
        }
        return ans;
    }
};
