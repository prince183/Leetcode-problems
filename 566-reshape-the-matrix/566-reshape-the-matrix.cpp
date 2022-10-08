class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
     int rows= mat.size();
     int columns= mat[0].size();
     vector<vector<int>> ans;
     vector<int> v;
     int cnt=0;
        
        if(r*c != rows*columns)
            return mat;
   
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<columns; j++)
            {
                v.push_back(mat[i][j]);
                cnt++;
                
                if(c==cnt)
                {
                    ans.push_back(v);
                     v={};
                    cnt=0;
                }
            }  
        }
        return ans;
    }
};