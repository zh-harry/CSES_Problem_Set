#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    vector<vector<char>> grid(n,vector<char>(m));
    for(int i = 0;i < n;++i){
        for(int j = 0;j < m;++j){
            cin >> grid[i][j];
            if((i+j) & 1){
                if(grid[i][j] == 'A')
                    grid[i][j] = 'B';
                else
                    grid[i][j] = 'A';
            }
            else{
                if(grid[i][j] == 'C')
                    grid[i][j] = 'D';
                else
                    grid[i][j] = 'C';
            }
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}

// XOXOXO
// OXOXOX
// XOXOXO
// OXOXOX
// when i+j is odd(X) => replace with 'A' or 'B'
// when i+j is even(O) => replace with 'C' or 'D'
// so that we can ensure no two adjacent cell are same
// and always has a solution