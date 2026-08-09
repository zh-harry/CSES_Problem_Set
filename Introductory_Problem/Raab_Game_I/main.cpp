#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;

        // 1st step check
        if((a+b > n) || (a*b == 0 && a+b != 0)){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        // a
        for(int i = 0;i < n;++i){
            cout << i+1 << ' ';
        }
        cout << endl;

        int even = n-(a+b);
        // b
        for(int i = 0;i < even;++i){
            cout << i+1 << ' ';
        }
        for(int i = even;i < n;++i){
            if(i+1+a <= n)
                cout << i+1+a << ' ';
            else
                cout << (i+1+a)%n + even << ' ';
        }
        cout << endl;
    }
    // 6 3 2
    // 1 2 3 4 5 6
    // 1 5 6 2 3 4

    return 0;
}