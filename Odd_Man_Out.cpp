#include<bits/stdc++.h>
using namespace std;
map<int, int> a;
int n, x;
int main (){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> x;
            a[x]++;
        }
        for(auto k : a){
            if(k.second == 1) cout << "Case #" << i << ": " << k.first << endl;
        }
        a.clear();
    }
}
