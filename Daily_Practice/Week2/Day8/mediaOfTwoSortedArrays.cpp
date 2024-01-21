class Solution {
public:
    vector<int> merge(vector<int>& nums1, vector<int>& nums2, int m, int n ){
        vector<int> output;
        int a = 0, b = 0;

        while(a<m && b<n){
            if(nums1[a]<nums2[b]){
                output.push_back(nums1[a]);
                a++;
            }
            else{
                output.push_back(nums2[b]);
                b++;
            }
        }
        while(a<m){
            output.push_back(nums1[a]);
            a++;
        }
        while(b<n){
            output.push_back(nums2[b]);
            b++;
        }
        return output;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> output = merge(nums1, nums2, nums1.size(),nums2.size());
        if(output.size()%2==1){
            return double(output[output.size()/2]);
        }
        else return (double(output[output.size()/2])+output[output.size()/2-1])/2;
    }
};