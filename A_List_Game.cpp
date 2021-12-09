#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int ans = 0;
    while(n > 1){
        int i;
        for(i = 2; i <= sqrt(n); i++){
            if(n%i == 0){
                n/=i;
                ans++;
                break;
            }
        }
        if(i > sqrt(n)){
            ans++;
            break;
        }
    }
    cout << ans << endl;
}
