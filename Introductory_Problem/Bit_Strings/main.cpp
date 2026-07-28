#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int ans = 1;    
    for(int i = 0;i < n;++i){
        ans = (ans*2) % ((int)1e9+7);
    }
    cout << ans << endl;

    return 0;
}