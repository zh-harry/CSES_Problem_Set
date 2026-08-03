#include <iostream>
#include <cstring>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str;
    int freq[27];
    memset(freq,0,sizeof(freq));
    cin >> str;
    for(const auto &ch : str){
        ++freq[ch-'A'];
    }
    int cnt_odd = 0,idx_odd = 26;
    for(int i = 0;i < 26;++i){
        if(freq[i] & 1){
            ++cnt_odd;
            idx_odd = i;
        }
    }
    int n = str.size();
    if(cnt_odd > 1){
        cout << "NO SOLUTION" << endl;
    }
    else{
        char ans[n];
        int ptr = 0;
        for(int i = 0;i < 26;++i){
            if(i != idx_odd){
                for(int j = 0;j < freq[i]/2;++j){
                    ans[j+ptr] = ans[n-(j+ptr)-1] = 'A'+i;
                }
                ptr += freq[i]/2;
            }
        }
        for(int i = 0;i < freq[idx_odd];++i){
            ans[i+ptr] = 'A'+idx_odd;
        }
        for(int i = 0;i < n;++i){
            cout << ans[i];
        }
        cout << endl;
    }

    return 0;
}

// even = even + even || odd + odd
// odd = odd + even
// => allows only one odd