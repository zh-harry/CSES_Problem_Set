#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    unordered_map<int,int> mp;
    for(int i = 0;i < n;++i){
        int x;
        cin >> x;
        mp.insert({x,i});
    }
    int ans = 1; // '1'
    for(int i = 1;i <= n;++i){
        if(mp[i] < mp[i-1])
            ++ans;
    }
    cout << ans << endl;

    return 0;
}