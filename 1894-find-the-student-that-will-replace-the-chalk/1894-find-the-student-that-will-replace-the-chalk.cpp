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
    vector<long long int>pre(n);
    pre[0]=a[0];
    for(long long int i=1;i<n;i++)
        pre[i]=pre[i-1]+a[i];
     int idx=lower_bound(pre.begin(),pre.end(),rem)-pre.begin();
     if(pre[idx]==rem)
         return idx+1;
    return idx;
}
};