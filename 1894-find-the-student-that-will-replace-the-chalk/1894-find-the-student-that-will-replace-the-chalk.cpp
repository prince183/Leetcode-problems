class Solution {
public:
   int chalkReplacer(vector<int>& a, int k) {
    long long int n=a.size();
    long long int sum=0;
    for(long long int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    long long int rem=k%sum;
    for(long long int i=0;i<n;i++)
    {
        rem-=a[i];
        if(rem<0)
        {
            return i;
        }
    }
    return -1;
}
};