#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> ans;

void Next_Permutation(string curr,string rest){
    if(rest == ""){
        ans.push_back(curr);
        return;
    }

    string next_curr = "";
    string check = "";
    for(int i = 0;i < rest.length();++i){
        next_curr = curr + rest[i];
        string next_rest = rest.substr(0,i) + rest.substr(i+1);
        
        if(next_curr != check)
            Next_Permutation(next_curr,next_rest);
        
        check = next_curr;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin >> str;
    sort(str.begin(),str.end());
    Next_Permutation("",str);
    cout << ans.size() << endl;
    for(const auto& s : ans)
        cout << s << endl;

    return 0;
}