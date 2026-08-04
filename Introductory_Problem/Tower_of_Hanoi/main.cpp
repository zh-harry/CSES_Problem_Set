#include <iostream>
using namespace std;

void Hanoi(char org,char aux,char dest,int n){
    if(n == 1){
        cout << org << ' ' << dest << endl;
    }
    else{
        Hanoi(org,dest,aux,n-1);
        Hanoi(org,aux,dest,1);
        Hanoi(aux,org,dest,n-1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int min_mv = 1;
    for(int i = 0;i < n;++i){
        min_mv *= 2;
    }
    min_mv -= 1;
    cout << min_mv << endl;
    Hanoi('1','2','3',n);

    return 0;
}