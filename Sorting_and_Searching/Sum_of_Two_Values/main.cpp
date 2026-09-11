#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,x;
    cin >> n >> x;
    vector<pair<int,int>> v;
    for(int i = 0;i < n;++i){
        int a;
        cin >> a;
        v.push_back({a,i+1});
    }
    sort(v.begin(),v.end());
    int l = 0,r = v.size()-1;
    bool flag = false;
    while(l < r && !flag){
        ll sum = v[l].first + v[r].first;
        if(sum > x)
            --r;
        else if(sum < x)
            ++l;
        else{
            cout << v[l].second << ' ' << v[r].second << endl;
            flag = true;
        }
    }
    if(!flag)
        cout << "IMPOSSIBLE" << endl;

    return 0;
}

// using hash(std::unordered_map) cost more searching time