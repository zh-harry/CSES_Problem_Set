#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m,k;
    cin >> n >> m >> k;
    
    vector<int> applicants(n);
    vector<int> apartments(m);

    for(int i = 0;i < n;++i)
        cin >> applicants[i];
    sort(applicants.begin(),applicants.end());

    for(int i = 0;i < m;++i)
        cin >> apartments[i];
    sort(apartments.begin(),apartments.end());

    int i = 0,j = 0;
    int ans = 0;
    while(i < n && j < m){
        int desired = applicants[i];
        int reality = apartments[j];
        if(reality < desired - k)
            ++j;
        else if(desired + k < reality)
            ++i;
        else{
            ++i;
            ++j;
            ++ans;
        }
    }
    cout << ans << endl;

    return 0;
}
