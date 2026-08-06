#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin >> str;
    vector<string> ans;
    sort(str.begin(),str.end());
    do{
        ans.push_back(str);
    }while(next_permutation(str.begin(),str.end()));
    cout << ans.size() << endl;
    for(const auto& s : ans){
        cout << s << endl;
    }

    return 0;
}