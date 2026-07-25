#include <iostream>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int first;
    cin >> first;
    ll mv = 0;
    for(int i = 1;i < n;++i){
        int second;
        cin >> second;
        if(first > second){
            int diff = first - second;
            mv += diff;
            second += diff;
        }
        first = second;
    }
    cout << mv;

    return 0;
}