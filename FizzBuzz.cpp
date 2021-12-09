#include<bits/stdc++.h>
using namespace std;
int main (){
    int x, y, z;
    cin >> x >> y >> z;
    for(int i = 1; i <= z; i++){
        if(i%x == 0 && i%y == 0){
            cout << "FizzBuzz" << endl;
            continue;
        }
        if(i%x == 0) {
            cout << "Fizz" << endl;
            continue;
        }
        if(i%y == 0){
            cout << "Buzz" << endl;
            continue;
        }
        cout << i << endl;
    }
}
