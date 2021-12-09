#include<bits/stdc++.h>
using namespace std;
const int Mod = 1e9 + 7;
int main (){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    int R, C;
    cin >> t;
    while(t--){
        cin >> R >> C;
        long long ans = 1;
        for(int i = 1; i <= R + C; i++) ans = (ans * 3)%Mod;
        for(int i = 1; i <= R*C; i++) ans = (ans*2)%Mod;
        cout << ans << endl;
    }
}
