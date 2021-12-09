#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll sum = 0;
ll bestdiff = 1e9 + 10;
ll a = 0, b = 0;

void solve(vector<ll>& v, ll pos, ll curr) {
    if(pos == v.size()) {
        ll rest = sum - curr;
        ll diff = abs(rest-curr);
        if(diff < bestdiff) {
            bestdiff = diff;
            a = curr;
            b = rest;
        }
    }
    else {
        ll target = sum / 2;
        if((curr - target) > bestdiff) {
            return;
        }
        solve(v, pos+1, curr);
        solve(v, pos+1, curr+v[pos]);
    }
}
int main (){
    ll n;
    while(cin >> n && n != 0) {
        sum = 0;
        bestdiff = 1e9 + 10;
        a = b = 0;
        vector<ll> v(n);
        for(auto& i : v) {
            cin >> i;
            sum += i;
        }
        sort(v.begin(), v.end());
        solve(v, 0, 0);
        cout << max(a,b) << " " << min(a,b) << endl;
    }
}
