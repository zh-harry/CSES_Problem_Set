#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        ll row,col;
        cin >> row >> col;
        ll mx = max(row,col);
        if(mx & 1)
            cout << (mx*mx)-(row-1)-(mx-col) << endl;
        else
            cout << (mx*mx)-(col-1)-(mx-row) << endl;
    }

    return 0;
}