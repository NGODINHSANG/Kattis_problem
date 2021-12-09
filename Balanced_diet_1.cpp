#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[20],n;
int main(){
    while(cin >> n){
        if(n == 0) break;
        ll s = 0, ans = 0;
        for(int i = 0; i < n; ++i)
            cin >> a[i], s += a[i];
        for(int i = 0; i<1<<n; ++i){
            ll cs = 0;
            for(int j = 0; j < n; ++j)
                if(i>>j&1)
                    cs += a[j];
            if(cs <= s/2) ans = max(ans, cs);
        }
        cout << s - ans << " " << ans << endl;
    }

}

