#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


inline int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}


bool solve(const vector<int>& perm) {
    int n = perm.size();
    
    
    vector<int> prefix_min(n);
    prefix_min[0] = perm[0];
    for (int i = 1; i < n; i++) {
        prefix_min[i] = min(prefix_min[i-1], perm[i]);
    }
    
    vector<int> suffix_gcd(n);
    suffix_gcd[n-1] = perm[n-1];
    for (int i = n-2; i >= 0; i--) {
        suffix_gcd[i] = gcd(suffix_gcd[i+1], perm[i]);
    }
    
 
    for (int i = 0; i < n-1; i++) {
        if (prefix_min[i] == suffix_gcd[i+1]) {
            return true;
        }
    }
    return false;
}

void ans(vector<int>& a) {
    sort(a.begin(), a.end());
    do {
        if (solve(a)) {
            cout << "YES\n";
            return;
        }
    } while (next_permutation(a.begin(), a.end()));
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& num : a) {
            cin >> num;
        }
        ans(a);
    }
    return 0;
}