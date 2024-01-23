class Solution {
public:
    int kthsmallestelement(int mid,int m,int n){
        int sum = 0;
        for(int i =1;i<=m;i++){
            sum+=min(mid/i,n);
        }
        return sum;
    }
    int findKthNumber(int m, int n, int k) {
        int start = 1;
        int end = m*n;
        int result = 0;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(kthsmallestelement(mid,m,n)<k){
                start = mid+1;
            }
            else{
                end = mid-1;
                result = mid;
            }
        }
        return result;
    }
};