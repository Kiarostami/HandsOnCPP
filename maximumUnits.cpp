class Solution {
public:
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans = 0;
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& v1, const vector<int>& v2){
        return v1[1] > v2[1];
    });
        for(int i = 0; i < boxTypes.size(); i++)
        {
            for(int j = 0; j < boxTypes[i][0]; j++){
                if(truckSize > 0)
                {
                    truckSize--;
                    ans += boxTypes[i][1];
                }
            }
        }
        return ans;
    }
};
