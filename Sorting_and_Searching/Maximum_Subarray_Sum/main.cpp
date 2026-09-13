#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    ll cur = 0,mx = INT_MIN;
    for(int i = 0;i < n;++i){
        ll x;
        cin >> x;
        cur = max(cur+x,x);
        mx = max(cur,mx);
    }
    cout << mx << endl;

    return 0;
}