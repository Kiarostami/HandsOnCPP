class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        string hold;
        int counter = 0;
        for(int i = 0; i <= n; i++)
        {
            //number += i;
            hold = bitset<32>(i).to_string();
            for(int j = 0; j < hold.length(); j++)
            {
                if (hold[j] == '1') counter++;
            }
            ans.push_back(counter);
            counter = 0;
        }
        return ans;
    }
};
