class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int> res;
        
        for(int i=0; i<arr.size(); i++)
        {
          pq.push({abs(arr[i]-x),arr[i]});  
        }
        
        for(int j=0; j<k; j++)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        sort(res.begin(), res.end());
        return res;
    }
};