#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<vector<int>> grid(n,vector<int>(n,0));
    vector<vector<bool>> used_row(n,vector<bool>(2*n,false));
    vector<vector<bool>> used_col(n,vector<bool>(2*n,false));
    for(int i = 0;i < n;++i){
        for(int j = 0;j < n;++j){
            for(int k = 0;k < 2*n;++k){
                if((!used_row[i][k]) && (!used_col[j][k])){
                    used_row[i][k] = used_col[j][k] = true;
                    grid[i][j] = k;
                    break;
                }
            }
            cout << grid[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}