class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> temp;
        
        for(int i=0; i<numRows; i++)
        {
            temp.push_back(1);
            for(int j=1; j<i; j++)
            {
                temp[j] = res[i-1][j-1] + res[i-1][j];
            }
            res.push_back(temp);
        }
        return res;
    }
};