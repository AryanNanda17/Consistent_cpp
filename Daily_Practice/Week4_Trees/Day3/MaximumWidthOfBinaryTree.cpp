class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root,0});
        int ans = 0;
        while(!q.empty()){
            int size = q.size();
            int min = q.front().second;
            int start,last;
            for(int i =0;i<size;i++){
                long long no = q.front().second-min;
                TreeNode* node = q.front().first;
                if(i==0)start = no;
                if(i==size-1)last = no;
                if(node->left){
                    q.push({node->left,(no*2)+1});
                }
                if(node->right){
                    q.push({node->right,(no*2)+2});
                }
                q.pop();
                ans = max(ans, last-start+1);
            }
        }
        return ans;
    }
};