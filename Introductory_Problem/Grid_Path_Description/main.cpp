#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

constexpr int di[4] = {-1,1,0,0};
constexpr int dj[4] = {0,0,-1,1};
constexpr char dir[4] = {'U','D','L','R'};

int visited[9][9];
string str;
int paths = 0;

void dfs(int i,int j,int n){
    if(!visited[i+di[0]][j+dj[0]] && !visited[i+di[1]][j+dj[1]] && visited[i+di[2]][j+dj[2]] && visited[i+di[3]][j+dj[3]])
        return;
    if(visited[i+di[0]][j+dj[0]] && visited[i+di[1]][j+dj[1]] && !visited[i+di[2]][j+dj[2]] && !visited[i+di[3]][j+dj[3]])
        return;
    if(i == 7 && j == 1){
        if(n == 48)
            ++paths;
        return;
    }
    for(int k = 0;k < 4;++k){
        int ni = i + di[k];
        int nj = j + dj[k];
        if(!visited[ni][nj] && (str[n] == '?' || str[n] == dir[k])){
            visited[ni][nj] = true;
            dfs(ni,nj,n+1);
            visited[ni][nj] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> str;
    memset(visited,0,sizeof(visited));
    for(int i = 0;i < 9;++i){
        for(int j = 0;j < 9;++j){
            if(i == 0 || i == 8 || j == 0 || j == 8)
                visited[i][j] = 1;
        }
    }
    visited[1][1] = 1;
    dfs(1,1,0);
    cout << paths << endl;

    return 0;
}

// since # of paths is too large
// we can do some optimization:
// 1. discard any function to check validation
//    => save function calling time
//
// 2. reserve extra two lines for rows and columns
//    => if the extra lines always set 1(true), only need to check
//       visited[i][j] instead of boundary condition(math formula form)
//
// 3. if up and down are blocked, only left and right are valid,
//    means there are two separated blocks which also means no solution.
//    (also work if left and right are blockec, up and down are free)