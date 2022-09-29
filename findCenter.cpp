class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int candidate1 = edges[0][0];
        int candidate2 = edges[0][1] ;
        for(int i = 0; i < edges.size(); i++)
            {
                    if(candidate1 == edges[i][0]) 
                        candidate1 = edges[i][0];
                    else if (candidate1 == edges[i][1])
                        candidate1 = edges[i][1];
                    else return candidate2;
            }
        return candidate1;
    }
};
