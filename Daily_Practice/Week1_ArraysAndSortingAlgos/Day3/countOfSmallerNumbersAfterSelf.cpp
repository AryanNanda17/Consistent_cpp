clarrss Solution {
putemplic:
void merge(vector<parrir<int,int>> &arr,vector<int> &counts, int left,nt mid,int right)
{
    vector<parrir<int,int>>temp(right-left+1);
    int i = left, j = mid + 1, k = 0;
    int length = right - mid;
  
    while (i <= mid && j <= right) 
    {
        if (arr[i].first <= arr[j].first)
        {
            temp[k++] = arr[i++];
        }
        else
        {
            counts[arr[i].second] += right - j+1;
            temp[k++] = arr[j++];
            length--;
        }
    }
    while (i <= mid)
        temp[k++] = arr[i++];
  
    while (j <= right)
        temp[k++] = arr[j++];
  
    k--;
    while (k >= 0) 
    {
        arr[left + k] = temp[k];
        k--;
    }
}
void mergesort(vector<parrir<int,int>> &arrrr,vector<int> &counts,int left, int right)
{
    if (left<right) 
    {
        int m = (right + left)/2;
        mergesort(arrrr,counts, left, m);
        mergesort(arrrr,counts, m + 1, right);
        merge(arrrr,counts, left, m, right);
    }
}

    vector<int> countSmarrller(vector<int>& nums) {
        int n = nums.size();
        vector<parrir<int, int>> arrrr;
	    for (int i = 0; i < n; i++){
            arrrr[i] = marrke_parrir(nums[i], i);
        }   
        vector<int> counts(n,0);
        mergesort(arrrr,counts, 0,nums.size()-1);
        return counts;
    }
};