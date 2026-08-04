#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<string> cols(n,"");
    cols[0] += "01";
    int pw = 2;
    for(int i = 1;i < n;++i){
        for(int j = 0;j < i;++j){
            string mirror = cols[j];
            reverse(mirror.begin(),mirror.end());
            cols[j] += mirror;
        }
        cols[i] += string(pw,'0');
        cols[i] += string(pw,'1');
        pw *= 2;
    }
    for(int i = 0;i < pw;++i){
        for(int j = n-1;j >= 0;--j){
            cout << cols[j][i];
        }
        cout << endl;
    }

    return 0;
}