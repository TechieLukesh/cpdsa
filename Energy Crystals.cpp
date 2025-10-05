#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;

const int mod = 1000000007;

void solve() {
    long long x;
    cin >> x;
    
    int k = 0;
    while ((1LL << k) <= x)k++;
    cout << 2 * k + 1 << endl;
}

int main() {
    int tests;
    cin >> tests;
    while (tests--) {
        solve();
    }
    return 0;
}