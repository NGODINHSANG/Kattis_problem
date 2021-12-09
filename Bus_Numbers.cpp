#include<bits/stdc++.h>
using namespace std;

int n;

void solve(){
    cin >> n;
    vector<int> a;
    for(int i = 1; i*i*i <= n; i++)
        a.push_back(i*i*i);
    map<int, int> sum;
    for(int i = 0; i < a.size() - 1; i++){
        for(int j = i + 1; j < a.size(); j++)
            sum[a[i] + a[j]]++;
    }
    int ans = -1;
    for(auto x : sum){
        if(x.second > 1 && x.first <= n)
            ans = x.first;
    }
    if(ans == -1) cout << "none" << endl;
    else cout << ans << endl;
}

int main(){
    solve();
}

