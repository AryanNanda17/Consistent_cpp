#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int maxGoldWeightRecursive(int i, int j, int R, int C, int K, vector<vector<int> >& items, unordered_map<string, int>& memo) {
    if (i == R && j == C) {
        return 0;
    }
    string key = to_string(i) + "_" + to_string(j);
    if (memo.find(key) != memo.end()) {
        return memo[key];
    }

    int maxWeight = 0;

    if (i + 1 <= R) {

        maxWeight = max(maxWeight, maxGoldWeightRecursive(i + 1, j, R, C, K, items, memo));
    }

    if (j + 1 <= C) {

        maxWeight = max(maxWeight, maxGoldWeightRecursive(i, j + 1, R, C, K, items, memo));
    }


    for (int k = 0; k < K; ++k) {
        if (items[k][0] == i && items[k][1] == j) {
            maxWeight += items[k][2];
            break;  
        }
    }

    memo[key] = maxWeight;
    return maxWeight;
}

int main() {
    int R, C, K;
    cin >> R >> C >> K;
    vector<vector<int> > items(K, vector<int>(3));
    for (int k = 0; k < K; ++k) {
        for (int j = 0; j < 3; ++j) {
            cin >> items[k][j];
        }
    }
    unordered_map<string, int> memo;
    int result = maxGoldWeightRecursive(1, 1, R, C, K, items, memo);
    cout << result << endl;

}