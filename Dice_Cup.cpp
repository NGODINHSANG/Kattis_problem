#include<bits/stdc++.h>
using namespace std;
int main (){
    int n, m;
    cin >> n >> m;
    if(n > m) swap(n, m);
    for(int i = n + 1; i <= m + 1; i++)
        cout << i << endl;
}
