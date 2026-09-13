#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0;i < n;++i)
        cin >> v[i];
    sort(v.begin(),v.end());

    ll ans = 1;
    for(const auto& i : v){
        if(i > ans)
            break;
        ans += i;
    }
    cout << ans << endl;

    return 0;
}

// ans denoted as the target value we want
// also means we can construct sum 1,2,...,ans-1

// ex:
//
// 1 1 2
// iteration | ans | sum
// 0         | 1   | 0
// 1         | 2   | 1
// 2         | 3   | 1,2
// 3         | 5   | 1,2,3,4
//
// 1 1 3
// iteration | ans | sum
// 0         | 1   | 0
// 1         | 2   | 1
// 2         | 3   | 1,2
// 3         | 6   | 1,2,3,4,5
//
// 1 1 4
// iteration | ans | sum
// 0         | 1   | 0
// 1         | 2   | 1
// 2         | 3   | 1,2
// 3         | X   | 1,2,X,4,5,6 => missing 3