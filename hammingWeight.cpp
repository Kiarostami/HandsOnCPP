class Solution {
public:
    int hammingWeight(uint32_t n) {
        auto nS = bitset<32>(n).to_string();
        int counter = 0;
        for(int i = 0; i < nS.length(); i++)
        {
            if(nS[i] == '1') counter++;
        }
        return counter;
    }
};
