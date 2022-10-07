class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitude;
        altitude.push_back(0);
        for(int i = 0; i < gain.size(); i++)
        {
            altitude.push_back(altitude[i]+gain[i]);
        }
        sort(altitude.begin(), altitude.end());
        return altitude[altitude.size()-1];
    }
};
