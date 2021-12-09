#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    string s1, s2;
    cin >> n >> s1 >> s2;
    int cnt = 0;
    int k = s1.size();
    for(int i = 0; i < k; i++){
        if(s1[i] == s2[i]) cnt++;
    }
    int w = abs(n - cnt);
    int ans = k - w;
    cout << ans << endl;
}
