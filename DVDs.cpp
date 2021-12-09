#include<bits/stdc++.h>
using namespace std;
const int Max = 1e6 + 1;

int n;
int a[Max];
int b[Max];
bool mark[Max];

void solve(){
    cin >> n;
    int x;
    memset(mark, true, sizeof mark);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int i = 0, j = 0;
    int ans = 0, maxs = -1;
    while(i < n){
        if(a[i] == b[j]){
            mark[a[i]] == false;
            i++, j++;
        }
        else{
            if(mark[b[j]]){
                ans++;
                maxs = max(maxs, a[i]);
                //mark[a[i]] = false;
                i++;
            }
            else j++;
        }
    }
    if(maxs != -1){
        int x;
        for(int i = n - 1; i >= 0; i--)
            if(b[i] == maxs) {
                x = i;
                break;
            }
        for(int i = 0; i < n - 1; i++){
            if( a[i] < a[n - 1] && mark[i] == false) ans++;
        }
        cout << ans + (n - 1 - x) << endl;
    }
    else cout << ans << endl;

}

int main (){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
