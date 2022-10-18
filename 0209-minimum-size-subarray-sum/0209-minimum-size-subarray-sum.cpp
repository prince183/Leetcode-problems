class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r=0, minlen = INT_MAX, sum=0;
        
        while(r<nums.size())
        {
            sum+= nums[r++];
            while(sum>=target)
            {
                minlen=min(minlen, r-l);
                sum-= nums[l++];
            }
        }
        return minlen == INT_MAX ? 0: minlen;
    }
};