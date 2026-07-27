#include <iostream>
using namespace std;
using ll = long long;

ll ans[10001];

void init(){
    for(int i = 1;i <= 10000;++i){
        ll square = i*i;
        ans[i] = (square*(square-1))/2 - 2*(i-1)*(i-2)*2;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    init();
    int n;
    cin >> n;
    for(int i = 1;i <= n;++i){
        cout << ans[i] << endl;
    }

    return 0;
}