class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0; vector<int> res;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]%2==0)
                sum+=nums[i];
        }
        for(int i=0; i<queries.size(); i++)
        {
            int ind = queries[i][1];
            int val = queries[i][0];
            
            if(nums[ind] % 2==0)
                sum-=nums[ind];
            
            nums[ind]+= val;
            
            if(nums[ind] %2 ==0)
                 sum+= nums[ind];
            
             res.push_back(sum);
        }
        return res;
    }
};