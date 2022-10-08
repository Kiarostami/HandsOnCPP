class Solution {
public:
    int percentageLetter(string s, char letter) {
        int counter = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == letter) counter++;
        }
        return floor(counter * 100 / s.length());
    }
};
