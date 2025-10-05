#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <cmath>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;

const int mod = 1000000007;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int val = stoi(s);
        int root = sqrt(val);

        if (root * root != val) {
            cout << -1 << endl;
            continue;
        }
        cout << 0 << " " << root << endl;
    }

    return 0;
}