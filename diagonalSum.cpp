class Solution {
public:
    void primaryDiagonal(vector<vector<int>>& mat, int &sum) {
        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = 0; j < mat.size(); j++)
            {
                if(i == j) sum += mat[i][j];
            }
        }
};
    
    void secondaryDiagonal(vector<vector<int>>& mat, int &sum) {
        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = 0; j < mat.size(); j++)
            {
                if(i == mat.size()-1-j) sum += mat[i][j];
            }
        }
};
    
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int k = mat.size() / 2;
        if (mat.size() % 2 != 0) sum -= mat[k][k];
        else sum = 0;
        primaryDiagonal(mat, sum);
        secondaryDiagonal(mat, sum);
        return sum;
    }
};
