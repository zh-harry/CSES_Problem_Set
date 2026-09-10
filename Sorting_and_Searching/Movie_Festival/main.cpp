#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int,int>> terminal(n);
    for(int i = 0;i < n;++i)
        cin >> terminal[i].first >> terminal[i].second;
    sort(terminal.begin(),terminal.end(),cmp);

    int ans = 0,previous = 0;
    for(const auto& t : terminal){
        if(t.first >= previous){
            ++ans;
            previous = t.second;
        }
    }
    cout << ans << endl;

    return 0;
}