#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin >> s;
    s += ';';
    int cnt = 0;
    int ans = 0;
    int i = 0;
    for(i = 0; i < s.size(); i++){
        if('0' <= s[i] && s[i] <= '9') cnt = cnt*10 + (s[i] - '0');
        else {
            if(s[i] == ';') {
                ans++;
                cnt = 0;
            }
            else {
                if(s[i] == '-'){
                    int x = cnt;
                    cnt = 0;
                    i++;
                    for(; i < s.size(); i++){
                        if(s[i] == ';') break;
                        else cnt = cnt*10 + (s[i] - '0');
                    }
                    ans += cnt - x + 1;
                    cnt = 0;
                }
            }
        }
    }
    cout << ans << endl;
}
