class Solution {
public:
    static bool cmp(vector<int>& tasks1,vector<int>& tasks2){
        return tasks1[1]<tasks2[1];
    }
    int findMinimumTime(vector<vector<int>>& tasks) {
        sort(tasks.begin(),tasks.end(),cmp);
        vector<bool> visited(2001, false);
        for(auto &task: tasks){
            int start = task[0];int end = task[1];int duration = task[2];
            for(int i = start;i<=end;i++)if(visited[i])duration--;
            for(int i = end;duration>0;i--){
                if(visited[i])continue;
                duration--;
                visited[i]=true;
            }
        }
        int ans = 0;
        for(int i =0;i<=2000;i++){
            if(visited[i])ans++;
        }
        return ans;
    }
};