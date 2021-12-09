#include<bits/stdc++.h>
using namespace std;

const int Max = 1e5 + 1;

string str[Max];
string s;
int n;
int b[26], c[Max];
bool mark[Max];

int main (){
    cin >> s >> n;
    for(int i = 0; i < n; i++){
        cin >> str[i];
    }
    memset(mark, false, sizeof mark);
    int count = 0;
    char s1 = s[s.size() - 1];
    for(int i = 0; i < n; i++){
        b[str[i][0] - 'a']++;
        if(str[i][0] == str[i][str[i].size() - 1])
            mark[i] = true;
        if(str[i][0] == s1){
            c[i]++;
            count++;
        }
    }
    if(count == 0){cout << "?" << endl; return 0;}
    for(int i = 0; i < n; i++){
        if(c[i]){
            int x = str[i].size();
            if(b[str[i][x - 1] - 'a'] == 0) {
                cout << str[i] << "!" << endl;
                return 0;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(c[i]){
            int x = str[i].size();
            if(b[str[i][x - 1] - 'a'] == 1 && mark[i]) {
                cout << str[i] << "!" << endl;
                return 0;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(c[i]){
            cout << str[i] << endl;
            return 0;
        }
    }

}
