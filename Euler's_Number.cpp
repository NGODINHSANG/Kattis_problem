#include<bits/stdc++.h>
using namespace std;

typedef long double ld;

int main (){
    int n;
    cin >> n;
    ld ans = 0;
    ld cur = 1;
    if(n > 30) n = 30;
    for(int i = 1; i <= n + 1; i++){
        ans += 1/cur;
        cur *= i;
    }
    cout << fixed << setprecision(15);
    cout << ans << endl;

}
