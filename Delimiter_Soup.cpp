#include <bits/stdc++.h>
using namespace std;

int main(){
    string line;
    getline(cin, line);
    stack<char> s;
    int chars = stoi(line);
    char c;
    int i;
    bool invalid = false;
    getline(cin, line);
    stringstream ss(line);
    for(i = 0; i < chars; i++){
        ss >> noskipws >> c;
        switch(c){
            case '(':
            case '{':
            case '[':
                s.push(c);
            case ' ':
                break;
            default:
                if(s.empty() || (s.top() != c - 2 && s.top() != c - 1)){
                    invalid = true;
                    goto end;
                }
                s.pop();
                break;
        }
    }
    end:
    if(invalid){
        cout << c << " " << i;
    } else {
        cout << "ok so far";
    }

    return 0;
}
