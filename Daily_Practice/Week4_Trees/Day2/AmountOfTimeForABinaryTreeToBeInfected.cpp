class Solution {
public:
    void convertTreeToGraph(TreeNode* root, int parent, unordered_map<int,vector<int>>& graph){
        if(root==NULL)return;
        vector<int>& adjacencyList = graph[root->val];
        if(root->left!=NULL){
            adjacencyList.push_back(root->left->val);
        }
        if(root->right!=NULL){
            adjacencyList.push_back(root->right->val);
        }
        if(parent!=0){
            adjacencyList.push_back(parent);
        }
        convertTreeToGraph(root->right,root->val,graph);
        convertTreeToGraph(root->left,root->val,graph);
        return;
    }
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int,vector<int>> graph;
        convertTreeToGraph(root,0,graph);
        queue<int> q;
        q.push(start);
        int ans = 0;
        unordered_set<int> visited;
        visited.insert(start);
        while(!q.empty()){
            int size = q.size();
            while(size--){
                int element = q.front();
                q.pop();
                for(auto i: graph[element]){
                    if(visited.find(i)==visited.end()){
                        visited.insert(i);
                        q.push(i);
                    }
                }
            }
            ans++;
        }
        return ans-1;
    }
};