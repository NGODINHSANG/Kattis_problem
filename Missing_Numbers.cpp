#include<bits/stdc++.h>
using namespace std;
int a[201];
int main (){
    int n;
    cin >> n;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        a[x]++;
    }
    int cnt = 0;
    for(int i = 1; i <= x; i++)
        if(a[i] == 0){
            cout << i << endl;
            cnt++;
        }
    if(cnt == 0) cout << "good job" << endl;

}
