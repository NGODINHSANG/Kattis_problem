#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
map<ll, ll> a;
vector<ll> b;
ll n;

void solve(){

    bool check = false;
    if(n < 0) check = true;
    n = abs(n);
    while(n > 1){
        int i;
        for(i = 2; i <= sqrt(n); i++){
            if(n%i == 0){
                n/=i;
                a[i]++;
                break;
            }
        }
        if(i > sqrt(n)){
            a[n]++;
            break;
        }
    }
    for(auto x : a) b.push_back(x.second);
    b.push_back(b[0]);
    int ans = b[0];
    for(int i = 1; i < b.size(); i++){
        ans = __gcd(ans, b[i]);
    }
    if(check){
        if(ans%2 == 0){
            if((ans/2)%2 == 0) ans = 1;
            else ans /= 2;
        }
    }
    cout << ans << endl;
    b.clear();
    a.clear();
    bool check = false;
    if(n < 0) check = true;
    n = abs(n);
    ld x, y;
    for(ll i = sqrt(n) + 1; i >= 1; i--){
        if(check && i%2 == 0) continue;
        x = 1/ld(i);
        y = pow(n, x);
        ld exp = abs(y - floor(y));
        if(exp < 0.000001) {
            cout << i << endl;
            break;
        }
    }
}


int main() {
    ld n;
    while(cin >> n && n != 0) {
        bool neg = false;
        if(n < 0) {
            neg = true;
        }
        n = abs(n);
        for(ll i = sqrt(n)+1; i >= 1; i--) {
            if(neg && i%2==0) {
                continue;
            }
            ld power = 1/ld(i);
            ld val = pow(n,power);
            ld diff = abs(val - floor(val));
            if(diff < .00001) {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
