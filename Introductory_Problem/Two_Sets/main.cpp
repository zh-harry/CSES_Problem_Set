#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;
    ll sum = (n*(n+1))/2;
    if(sum & 1){
        cout << "NO" << endl;
    }
    else{
        vector<bool> choosen(n+1,false);
        ll half = sum/2;
        int cnt = 0;
        for(int i = n;i > 0 && half > 0;--i){
            if(i <= half){
                half -= i;
                choosen[i] = true;
                ++cnt;
            }
        }
        cout << "YES" << endl;
        cout << cnt << endl;
        for(int i = 1;i <= n;++i){
            if(choosen[i])
                cout << i << ' ';
        }
        cout << endl << n-cnt << endl;
        for(int i = 1;i <= n;++i){
            if(!choosen[i])
                cout << i << ' ';
        }
    }
    return 0;
}