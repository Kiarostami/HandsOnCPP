class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target(nums.size());
        for(int i = 0; i < index.size(); i++)
        {
            target.pop_back();
            target.insert(target.begin()+index[i], nums[i]);
        }
        return target;
    }
};
