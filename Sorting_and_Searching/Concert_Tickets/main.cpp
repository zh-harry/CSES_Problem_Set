#include <iostream>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    multiset<int> price;
    for(int i = 0;i < n;++i){
        int h;
        cin >> h;
        price.insert(h);
    }    
    for(int i = 0;i < m;++i){
        int t;
        cin >> t;
        auto it = price.upper_bound(t);
        if(it == price.begin()){
            cout << "-1";
        }
        else{
            --it;
            cout << *it;
            price.erase(it);
        }
        cout << endl;
    }
    return 0;
}

// std::multiset has O(logN) at erase operation (due to its tree structure)
// which is more faster than std::vector who cost O(N) worst case