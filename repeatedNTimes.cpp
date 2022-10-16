class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        for(int j = 0; j < nums.size(); j++)
        {
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[j] == nums[i] && i != j) return nums[i];
            }
        }
        return 0;
    }
};
