class Solution {
public:
    void getDivisorAndSum(int &num, int &sum) {
        vector<int> ans;
        sum = 0;
        for(int i = 1; i <= sqrt(num); i++)
        {
            if(num % i == 0) {
                if(i == num / i) {
                    ans.push_back(i);
                    sum += i;
                }
                else {
                    ans.push_back(i);
                    ans.push_back(num / i);
                    sum += i;
                    sum += num / i;
                }
            }
        }
    }
    
    bool checkPerfectNumber(int num) {
        int sum = 0;
        getDivisorAndSum(num, sum);
        return (sum - num == num ? true : false);
    }
};
