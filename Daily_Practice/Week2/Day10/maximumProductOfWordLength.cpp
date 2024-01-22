class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size();
        vector<int> state(n);
        int result = 0;
        for(int i = 0;i<n;i++){
            for(auto &k : words[i]){
                state[i] |= (1<<(k-'a'));
            }
        }
        for(int i = 0;i<n;i++){
            for(int j = i;j<n;j++){
                if(!(state[i]&state[j])){
                    int a = words[i].length()*words[j].length();
                    result = max(result, a);
                }
            }
        }
        return result;
    }
};