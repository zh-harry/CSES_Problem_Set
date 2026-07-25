#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin >> str;
    char first = str[0];
    int len = 1;
    int mx = 1;
    for(int i = 1;i < str.size();++i){
        char second = str[i];
        if(second == first)
            ++len;
        else
            len = 1;
        if(len > mx)
            mx = len;
        first = second;
    }
    cout << mx;

    return 0;
}