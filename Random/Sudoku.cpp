#include<iostream> 
#include<vector> 
using namespace std;

bool check(vector<vector<int>> &board, int no, int r, int c){
    // row
    for(int i = 0 ; i < 9 ; i++ ){
        if(board[i][c]==0)continue;
        if(board[i][c]==no)return false;
    }
    // column
    for(int j = 0 ; j < 9 ; j++ ){
        if(board[r][j]==0)continue;
        if(board[r][j]==no)return false;
    }
    // box
    int a = r%3;
    int b = c%3;
    int topLeftr = r-a;
    int topLeftc = c-b;
    for(int i = topLeftr ; i< topLeftr + 3 ; i ++){
        for(int j = topLeftc ; j < topLeftc + 3 ; j++){
            if(board[i][j]==0)continue;
            if(board[i][j]==no)return false;
        }
    }
    return true;
}

void suduko_solve(vector<vector<int>> &board, int r){
    if(r==9){
        return;
    }
    for(int c = 0 ; c<9;c++){
        if(board[r][c]==0){
            for(int no = 1; no<=9; no++){
                if(check(board, no, r, c)){
                    board[r][c]=no;
                    break;
                }
            }
        }
    }
    suduko_solve(board, r+1);
    return;
}

int main(void) {
	vector<vector<int>> board;
	for(int i = 0;i<9;i++){
	    vector<int> helper;
	    for(int j = 0; j<9 ; j++){
	       int a; cin>>a;
	       helper.push_back(a);
	    }
	    board.push_back(helper);
	}
	suduko_solve(board, 0);
	for(int i = 0;i<9;i++){
	    for(int j = 0; j<9 ; j++){
	       cout<<board[i][j];
	    }
	    cout<<endl;
	}
}