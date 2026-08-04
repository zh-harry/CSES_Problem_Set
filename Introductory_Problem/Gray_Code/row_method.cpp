// since main.cpp take every column as a string
// I'll try take every row as a string in this code

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<string> rows;
    rows.push_back("0");
    rows.push_back("1");
    for(int i = 1;i < n;++i){
        vector<string> tmp;
        for(const auto& j : rows){
            tmp.push_back("0"+j);
        }
        reverse(rows.begin(),rows.end());
        for(const auto& j : rows){
            tmp.push_back("1"+j);
        }
        rows = tmp;
    }
    for(const auto& i : rows){
        cout << i << endl;
    }

    return 0;
}