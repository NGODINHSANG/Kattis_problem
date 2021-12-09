/*

 * @author SangND
 * IT2 - 03
 * HUST - K63
 * -- Must try to do something for the future and someone --

				 ─────▄██▀▀▀▀▀▀▀▀▀▀▀▀▀██▄─────
				 ────███───────────────███────
				 ───███─────────────────███───
				 ──███───▄▀▀▄─────▄▀▀▄───███──
				 ─████─▄▀────▀▄─▄▀────▀▄─████─
				  ████──▄████─────████▄──█████
				 █████─██▓▓▓██───██▓▓▓██─█████
				 █████─██▓█▓██───██▓█▓██─█████
				 █████─██▓▓▓█▀─▄─▀█▓▓▓██─█████
				 ████▀──▀▀▀▀▀─▄█▄─▀▀▀▀▀──▀████
				 ███─▄▀▀▀▄────███────▄▀▀▀▄─███
				 ███──▄▀▄─█──█████──█─▄▀▄──███
				 ███─█──█─█──█████──█─█──█─███
				 ███─█─▀──█─▄█████▄─█──▀─█─███
				 ███▄─▀▀▀▀──█─▀█▀─█──▀▀▀▀─▄███
				 ████─────────────────────████
				 ─███───▀█████████████▀───████
				 ─███───────█─────█───────████
				 ─████─────█───────█─────█████
				 ───███▄──█────█────█──▄█████─
				 ─────▀█████▄▄███▄▄█████▀─────
				 ──────────█▄─────▄█──────────
				 ──────────▄█─────█▄──────────
				 ───────▄████─────████▄───────
				 ─────▄███████───███████▄─────
				 ───▄█████████████████████▄───
				 ─▄███▀───███████████───▀███▄─
				 ███▀─────███████████─────▀███
				 ▌▌▌▌▒▒───███████████───▒▒▐▐▐▐
				 ─────▒▒──███████████──▒▒─────
				 ──────▒▒─███████████─▒▒──────
				 ───────▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒───────
				 ─────────████░░█████─────────
				 ────────█████░░██████────────
				 ──────███████░░███████───────
				 ─────█████──█░░█──█████──────
				 ─────█████──████──█████──────
				 ──────████──████──████───────
				 ──────████──████──████───────
				 ──────████───██───████───────
				 ──────████───██───████───────
				 ──────████──████──████───────
				 ─██────██───████───██─────██─
				 ─██───████──████──████────██─
				 ─███████████████████████████─
				 ─██─────────████──────────██─
				 ─██─────────████──────────██─
				 ────────────████─────────────
				 ─────────────██──────────────
-  Play with me and enjoy coding...

------------------------------------------------------------------------
- *** Everything will be okay in the end
-   If it isn't okay, it isn't the end ***
			-- From someone who has been --

*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <assert.h>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <numeric>
#include <chrono>
#include <random>
#include <functional>
#include <tuple>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <list>
#include <array>
#include <bitset>
#include <unordered_map>

#define lb lower_bound
#define up upper_bound
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pob pop_back
#define gcd __gcd
#define inf 1e18
#define endl "\n"
#define NDS ios_base::sync_with_stdio(false);cin.tie(0);
#define Pi 3.1415926535897932384626433832795
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef long double ld;

int p, k, m;
double x;

void solve(){
    cin >> k >> m >> x;
    int p, q;
    double ans = 1.0;
    for(int i = m; i > 0; i--){
        double num = x * i;
        double h = ceil(num) / double(i);
        double l = floor(num) / double(i);

        if(abs(h - x) < ans){
            ans = fabs(h - x);
            p = ceil(num);
            q = i;
        }
        if(fabs(l - x) < ans){
            ans = fabs(l - x);
            p = floor(num);
            q = i;
        }
    }

    int divideVal = __gcd(p, q);
    cout << k << " " << p / divideVal << "/" << q / divideVal << "\n";
}

int main () {
	NDS
	cin >> p;
	while(p--){
        solve();
	}

}
