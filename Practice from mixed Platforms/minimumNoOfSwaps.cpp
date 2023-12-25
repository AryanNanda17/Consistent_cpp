int minSwaps(vector<int> &arr)
{
    int n = arr.size();
    vector<pair<int,int>> v;
    for(int i =0;i<arr.size();i++)v.push_back({arr[i],i});
    sort(v.begin(),v.end());
    int ans = 0;
    for(int i =0;i<n;i++){
        if(v[i].first==arr[i])continue;
        ans++;
        swap(v[i],v[v[i].second]);
        i--;
    }
    return ans;
}