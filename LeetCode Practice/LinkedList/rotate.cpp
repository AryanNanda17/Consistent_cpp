class Solution {
public:
    void rotate(vector<int>& input, int d) {
    int n = input.size();
    
    vector<int> temp;
    for(int i=0;i<n-d;i++){
        temp.push_back(input[i]);
    }
    int j = 0;
    for(int i=0;i<d;i++){
        input[j] = input[n-d+i];
        j++;
    }
    for(int i=0;i<temp.size();i++){
        input[j] = temp[i];
        j++;
    }
    }
};