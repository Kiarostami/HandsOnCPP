class Solution {
public:
    bool selfDividingCheck(int &num) {
        string sNum = to_string(num);
        for(int i = 0; i < sNum.length(); i++)
        {
            if(num % (sNum[i]-'0') != 0) return false;
        }
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        string hold;
        for(int i = left; i <= right; i++)
        {
            hold = to_string(i);
            if(hold.find("0") == std::string::npos) 
            {
                if(selfDividingCheck(i)) ans.push_back(i);
            }
        }
        return ans;
    }
};
