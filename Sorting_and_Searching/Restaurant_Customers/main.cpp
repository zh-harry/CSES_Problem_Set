#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int,bool>> terminal;
    for(int i = 0;i < n;++i){
        int a,b;
        cin >> a >> b;
        terminal.push_back({a,true});
        terminal.push_back({b,false});
    }
    sort(terminal.begin(),terminal.end());

    int cur = 0,mx = 0;
    for(const auto& t : terminal){
        cur += (t.second ? 1 : -1);
        mx = max(cur,mx);
    }
    cout << mx << endl;

    return 0;
}
