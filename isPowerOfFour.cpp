class Solution {
public:
    bool isPowerOfFour(int n) {
       if(n == 0) return false;
        auto ans = log2(n) / log2(4);
        if(ans == round(ans)) return true;
        return false; 
    }
};
