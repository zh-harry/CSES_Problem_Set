#include <iostream>
#include <vector>
using namespace std;

vector<string> board(8);
vector<pair<int,int>> queens;
int ways = 0;

bool check(int row,int col){
    if(!queens.empty()){
        int last_row = queens.back().first;
        int last_col = queens.back().second;
        if(row < last_row || (row == last_row && col <= last_col))
            return false;
    }
    if(board[row][col] == '*')
        return false;
    for(const auto& q : queens){
        if((row-q.first == 0) || (col-q.second == 0) || (row-q.first == col-q.second) || (row-q.first == q.second-col)){
            return false;
        }
    }
    return true;
}

void dfs(int row,int col,int num){
    if(num == 8){
        ++ways;
        return;
    }
    for(int i = 0;i < 8;++i){
        for(int j = 0;j < 8;++j){
            if(check(i,j)){
                queens.push_back({i,j});
                dfs(i,j+1,num+1);
                queens.pop_back();
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string row;
    for(int i = 0;i < 8;++i){
        cin >> row;
        board[i] = row;
    }
    dfs(0,0,0);
    cout << ways << endl;

    return 0;
}