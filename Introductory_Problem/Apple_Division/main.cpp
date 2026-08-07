#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    ll sum = 0;
    for(int i = 0;i < n;++i){
        cin >> v[i];
        sum += v[i];
    }
    ll mn_diff = sum,pw = 1 << n;
    for(ll i = 0;i < pw;++i){
        ll code = i;
        ll group = 0;
        for(int j = 0;j < n;++j){
            int take = code % 2;
            if(take)
                group += v[j];
            code /= 2;
        }
        mn_diff = min(mn_diff,abs(group*2 - sum));
    }
    cout << mn_diff << endl;

    return 0;
}
