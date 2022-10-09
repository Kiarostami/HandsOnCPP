class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0) return false;
        auto ans = log2(n);
        if(ans == round(ans)) return true;
        return false;
    }
};
