class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> checker(26);
        
        for(int i = 0; i < sentence.length(); i++)
        {
            checker[int(sentence[i])-97] = true;
        }
        
        for(int i = 0; i < checker.size(); i++)
        {
            if(checker[i] == false) return false;
        }
        return true;
    }
};
