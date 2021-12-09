#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
ll tich(ll a, ll b, ll c){
    ll res = 1;
    while(b > 0){
        if(b & 1 == 1){
            res = (res * a) % c;
        }
        a = (a * a) % c;
        b /= 2;
    }
    return res % c;
}

int main() {
    ll t;
    cin >> t;

    while(t--){
        ll num;
        cin >> num;
        num--;
        ll ans = (8* tich(9, num, mod)) % mod;
        cout << ans << endl;
    }
}
