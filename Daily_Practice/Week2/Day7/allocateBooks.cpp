bool check(vector<int>& arr, int n,int curno, int total){
    int curSum =0;
    int student = 1;
    for(int i = 0;i<n;i++){
        if(arr[i]>curno)return false;
        if(curSum+arr[i]>curno){
            student++;
            curSum = arr[i];
        }
        else{
            curSum += arr[i];
        }
    }
    if(student>total){
        return false;
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    if(n<m)return -1;
    int start = 0;
    int end = accumulate(arr.begin(),arr.end(),0);
    int result = 0;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(check(arr,n,mid,m)){
            result = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return result;
}