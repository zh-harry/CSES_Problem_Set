#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0;i < n;++i){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int target = v[n/2];
    ll ans = 0;
    for(const auto& i : v){
        ans += abs(i - target);
    }
    cout << ans << endl;

    return 0;
}