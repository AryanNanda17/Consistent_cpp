class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char> st;
        int n = s.length();
        int ans = 0;
        if(y>x){
            for(int i=0;i<n;i++){
                if(s[i]=='a'){
                    if(!st.empty()){
                        if(st.top()=='b'){
                            st.pop();
                            ans+=y;
                            continue;
                        }
                    }
                }
                st.push(s[i]);
            }
            string a="";
            while(!st.empty()){
                a += st.top();
                st.pop();
            }
            reverse(a.begin(),a.end());
            stack<char> sa;
            for(int i=0;i<a.length();i++){
                if(a[i]=='b'){
                    if(!sa.empty()){
                        if(sa.top()=='a'){
                            sa.pop();
                            ans+=x;
                            continue;
                        }
                    }
                }
                sa.push(a[i]);
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(s[i]=='b'){
                    if(!st.empty()){
                        if(st.top()=='a'){
                            st.pop();
                            ans+=x;
                            continue;
                        }
                    }
                }
                st.push(s[i]);
            }
            string a="";
            while(!st.empty()){
                a += st.top();
                st.pop();
            }
            reverse(a.begin(),a.end());
            stack<char> sa;
            for(int i=0;i<a.length();i++){
                if(a[i]=='a'){
                    if(!sa.empty()){
                        if(sa.top()=='b'){
                            sa.pop();
                            ans+=y;
                            continue;
                        }
                    }
                }
                sa.push(a[i]);
            }
        }
        return ans;
    }
};

