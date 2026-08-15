#include <iostream>
#include <cstring>
using namespace std;


bool check(const int freq[],int len){
    for(int i = 0;i < 26;++i){
        if(freq[i] > (len+1)/2){
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string str;
    cin >> str;
    int len = str.length();
    int freq[26];
    memset(freq,0,sizeof(freq));
    for(const auto& i : str){
        ++freq[i-'A'];
    }

    string ans = "";
    char last = 'A'-1;
    for(int i = 0;i < len;++i){
        bool success = false;
        for(int j = 0;j < 26;++j){
            char curr = (char)('A'+j);
            if(freq[j] > 0 && curr != last){
                --freq[j];
                if(check(freq,len-i-1)){
                    ans += curr;
                    last = curr;
                    success = true;
                    break;
                }
                ++freq[j];
            }
        }
        if(!success){
            ans = "-1";
            break;
        }
    }
    cout << ans << endl;

    return 0;
}