class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
    int a=0;
    int b=0;
    int i=0;
    vector<int> ans(m+n);
    while(a<m && b<n){
        if(arr1[a]<arr2[b]){ans[i]=arr1[a];a++;i++;}
        else {ans[i]=arr2[b];b++;i++;}
    }while (a<m){
        ans[i]=arr1[a];a++;i++;
    }while (b<n){ans[i]=arr2[b];b++;i++;}
    for(int i = 0;i<m+n;i++){
        arr1[i]=ans[i];
    }
    }
};