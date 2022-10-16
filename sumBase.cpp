class Solution {
public:
    int sumBase(int n, int k) {
        vector<int> converted;
        int sum = 0;
        
        while(n >= k)
        {
            converted.push_back(n % k);
            n = n / k;
        }
        converted.push_back(n);
        
        for(int i = 0; i < converted.size(); i++)
        {
            sum += converted[i];
        }
        return sum;
    }
};
