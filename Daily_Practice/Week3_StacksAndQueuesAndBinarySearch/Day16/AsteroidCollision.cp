class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> output;
        int n = asteroids.size();
        stack<int> s;
        for(int i = 0;i<n;i++){
            int a = asteroids[i];
            if(a<0){
                if(s.empty()){
                    s.push(a);
                    continue;
                }
                while(!s.empty()){
                    int b = s.top();
                    s.pop();
                    if(b<0){
                        s.push(b);
                        s.push(a);
                        break;
                    }
                    if(abs(a)>b){
                        if(s.empty()){
                            s.push(a);
                            break;
                        }
                        continue;
                    }
                    else if(abs(a)<b){
                        s.push(b);
                        break;
                    }
                    else{
                        break;
                    }
                }
            }
            else{
                s.push(a);
            }
        }
        while(!s.empty()){
            output.push_back(s.top());
            s.pop();
        }
        reverse(output.begin(),output.end());
        return output;
    }
};