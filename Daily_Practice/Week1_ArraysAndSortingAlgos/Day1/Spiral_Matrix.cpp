class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> output;
        int numRows = matrix.size();
        int numCols = (numRows>0)?matrix[0].size():0;
        int rowS = 0;int colS = 0;int rowE=numRows-1;int colE = numCols-1;
        int count = 0;
        while(count<=numRows*numCols){
            for(int i = rowS, j = colS;j<=colE;j++){
                output.push_back(matrix[i][j]);
                count++;
            }
            if(count==numRows*numCols)break;
            rowS++;
            for(int i = colE, j = rowS;j<=rowE;j++){
                output.push_back(matrix[j][i]);
                count++;
            }
            if(count==numRows*numCols)break;
            colE--;
            for(int i = rowE, j = colE;j>=colS;j--){
                output.push_back(matrix[i][j]);
                count++;
            }
            if(count==numRows*numCols)break;
            rowE--;
            for(int i = rowE, j = colS;i>=rowS;i--){
                output.push_back(matrix[i][j]);
                count++;
            }
            colS++;
        }
        return output;
    }
};