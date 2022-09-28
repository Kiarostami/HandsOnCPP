class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> ans(queries.size());
        int counter = 0;
        int sum = 0;
        //int min = *min_element(nums.begin(), nums.end());
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < queries.size(); i++)
        {
            if (queries[i] < *min_element(nums.begin(), nums.end())) ans[i] = 0;
            else
            {
                //sum = *min_element(nums.begin(), nums.end());
                //counter++;
                for(int j = 0; j < nums.size(); j++)
                {
                    if((sum + nums[j]) <= queries[i])
                    {
                        sum = sum + nums[j];
                        //min = nums[j];
                        counter++;
                    }     
                }                       
            }
            ans[i] = counter;
            counter = 0;
            sum = 0;
            //min = *min_element(nums.begin(), nums.end());
        }
        return ans;
    }
};
