#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,x;
    cin >> n >> x;
    vector<int> child(n);
    for(int i = 0;i < n;++i){
        cin >> child[i];
    }
    sort(child.begin(),child.end());
    int l = 0,r = child.size()-1;
    int ans = 0;
    while(l <= r){
        if(child[l] + child[r] <= x)
            ++l;
        --r;
        ++ans;
    }
    cout << ans << endl;

    return 0;
}