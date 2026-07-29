#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int cnt = 0;
    while(n >= 5){
        n /= 5;
        cnt += n;
    }
    cout << cnt << endl;

    return 0;
}