class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int counter = 0;
        for (int i = 0; i < nums.size(); i++) 
        {
            for (int j = i; j < nums.size(); j++) 
            {
                if((nums[i] + nums[j] == target) && (i != j))
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};
