#include <iostream>
#include <vector>
#include <queue>
using namespace std;

constexpr int dr[8] = {2,-2,1,1,2,-2,-1,-1};
constexpr int dc[8] = {1,1,2,-2,-1,-1,2,-2};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<vector<int>> grid(n,vector<int>(n,-1));
    queue<pair<int,int>> q;
    q.push({0,0});
    grid[0][0] = 0;
    while(!q.empty()){
        auto curr = q.front();
        q.pop();
        for(int i = 0;i < 8;++i){
            int row = curr.first + dr[i];
            int col = curr.second + dc[i];
            if((0 <= row && row < n) && (0 <= col && col < n) && grid[row][col] == -1){
                q.push({row,col});
                grid[row][col] = grid[row-dr[i]][col-dc[i]] + 1;
            }
        }
    }
    for(int i = 0;i < n;++i){
        for(int j = 0;j < n;++j){
            cout << grid[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}