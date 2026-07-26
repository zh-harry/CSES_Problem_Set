#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    if(n == 1){
        cout << 1;
    }
    else if (2 <= n && n <= 3){
        cout << "NO SOLUTION";
    }
    else{
        cout << 2;
        for(int i = 4;i <= n;i+=2){
            cout << ' ' << i;
        }
        for(int i = 1;i <= n;i+=2){
            cout << ' ' << i;
        }
    }

    return 0;
}