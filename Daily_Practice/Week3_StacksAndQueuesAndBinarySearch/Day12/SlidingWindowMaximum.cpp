class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<pair<int, int>> pq;
        vector<int> v(n-k+1);
        for(int i =0;i<k;i++){
            pq.push({nums[i],i});
        }
        v[0]=pq.top().first;
        for(int i = k;i<nums.size();i++){
            while(!pq.empty() && pq.top().second<=i-k)
                pq.pop();
            pq.push({nums[i],i});
            v[i-k+1] = pq.top().first;
        }
        return v;
    }
};