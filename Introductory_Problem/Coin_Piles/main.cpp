#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int sum = a + b;
        if(sum % 3 != 0){
            cout << "NO" << endl;
        }
        else{
            int mx = max(a,b);
            int mn = sum - mx;
            if(mn * 2 < mx){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}