#include <iostream>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 5;i <= n;i+=5){
        int tmp = i;
        while(tmp % 5 == 0){
            ++cnt;
            tmp /= 5;
        }
    }
    cout << cnt << endl;

    return 0;
}

