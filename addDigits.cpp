class Solution {
public:
    int traverseDigits(int &num) {
        int sum = 0;
        int hold = 0;
        int lent = to_string(num).length();
        int len = lent;
        
        if(num < 10) return num;
        for(int i = 0; i < lent; i++)
        {
            hold = num / pow(10, len-1);
            sum += hold;
            num = num - hold * pow(10, len-1);
            len = to_string(num).length();
        }
        num = sum;
        traverseDigits(num);
        return num;
    }
    
    int addDigits(int num) {
        return traverseDigits(num);
    }
};
