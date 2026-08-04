#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> GrayCode(int n){
    if(n == 1){
        return {"0","1"};
    }
    vector<string> rows;
    vector<string> previous = GrayCode(n-1);
    for(const auto& i : previous){
        rows.push_back("0"+i);
    }
    reverse(previous.begin(),previous.end());
    for(const auto& i : previous){
        rows.push_back("1"+i);
    }
    return rows;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<string> ans = GrayCode(n);
    for(const auto& i : ans){
        cout << i << endl;
    }

    return 0;
}