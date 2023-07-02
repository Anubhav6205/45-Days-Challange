class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int>r,c;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                   r.insert(i);
                    c.insert(j);
                }
            }
        }
        for(auto it:r)
        {
            for(int i=0;i<matrix[0].size();i++)
            {
                matrix[it][i]=0;
            }
        }
        
        for(auto it:c)
        {
            for(int i=0;i<matrix.size();i++)
            {
                matrix[i][it]=0;
            }
        }
        
    }
};