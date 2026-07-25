#include <iostream>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;
    ll target = n*(n+1)/2;
    ll sum = 0;
    for(int i = 0;i < n-1;++i){
        ll x;
        cin >> x;
        sum += x;
    }
    ll ans = target - sum;
    cout << ans;

    return 0;
}