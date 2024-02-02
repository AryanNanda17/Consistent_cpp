class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>> car;
        for(int i = 0;i<n;i++){
            car.push_back({position[i],speed[i]});
        }
        sort(car.begin(),car.end());
        stack<pair<int,int>> fleets;
        for(int i = n-1 ;i>=0; i--){
            if(fleets.empty()){
                cout<<1<<endl;
                fleets.push(car[i]);
                continue;
            }
            double car1Time = double(target-car[i].first)/car[i].second;
            double car2Time = double(target-fleets.top().first)/fleets.top().second;
            if(car1Time<=car2Time){
                cout<<1<<endl;
                continue;
            }
            else{

                fleets.push(car[i]);
            }
        }
        return fleets.size();
    }
};