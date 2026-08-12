#include <iostream>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int q;
    cin >> q;
    while(q--){
        ll k;
        cin >> k;
        int digits = 1;
        ll head = 1;
        while(k - (9*head*digits) > 0){
            k -= 9*head*digits;
            ++digits;
            head *= 10;
        }
        // total digits amount before target index
        ll amount = k-1;
        ll num = head + (amount/digits);
        ll md = amount%digits;
        int ans = 0;
        for(ll i = 0;i < digits-md;++i){
            ans = num%10;
            num /= 10;
        }
        cout << ans << endl;
    }

    return 0;
}

// k = 214
// 214 - 9 = 205
// 205 - 180 = 25
// amount = 25 - 1 = 24
// num = 100 + 24/3 = 108
// md = 24%3 = 0
// target:                                 k
// modulo:                                 012
// number: 100 101 102 103 104 105 106 107 108