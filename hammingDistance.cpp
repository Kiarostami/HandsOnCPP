class Solution {
public:
    int hammingDistance(int x, int y) {
        string xS = bitset<32>(x).to_string();
        string yS = bitset<32>(y).to_string();
        int counter = 0;
        for(int i = 0; i < xS.length(); i++)
        {
            if(xS[i] != yS[i]) counter++;
        }
        return counter;
    }
};
