class Solution {
public:
    int stringValue(string &Word) {
        string ans = "";
        for(int i = 0; i < Word.length(); i++)
        {
            ans += to_string((int)Word[i]-97);
        }
        return stoi(ans);
    }    
    

    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        if(stringValue(firstWord) + stringValue(secondWord) == stringValue(targetWord)) return true;
        return false;
    }
};
