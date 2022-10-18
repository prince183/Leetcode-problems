class Solution {
public:
    int triangleNumber(vector<int>& nums) {
     int res =0, n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        for(int i=n-1; i>=0; i--)
        {
            int l=0, r= i-1;
            while(l<r)
            {
                if(nums[l]+ nums[r]>nums[i])
                {
                    res+= r-l;  //store the range for which condition will be true 
                    r--;
                }
                else
                    l++;
            }
        }
        return res;
    }
};