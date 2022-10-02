class Solution {
public:
    int minimumSum(int num) {
        vector<int> digits(4);
        int hold = 0;
        int temp = num / 1000;
        
        for(int i = 0; i < 4; i++)
        {
            hold = num / pow(10, 3-i);
            if(hold < 10) digits[i] = hold;
            else digits[i] = hold - temp * 10;
            temp = hold;
        }
        sort(digits.begin(), digits.end());
        return (digits[0]*10 + digits[2]) + (digits[1]*10 + digits[3]);
    }
};
