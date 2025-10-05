#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> input(n);
    for (int i = 0; i < n; ++i) {
        cin >> input[i];
    }
    
    unordered_map<int, int> mymap;
    mymap[0] = 3;
    mymap[1] = 1;
    mymap[2] = 2;
    mymap[3] = 1;
    mymap[5] = 1;
    
    unordered_map<int, int> ct;
    int completed = 0;
    int min_steps = 0;
    
    for (int i = 0; i < n; ++i) {
        int digit = input[i];
        if (mymap.find(digit) != mymap.end()) {
            if (ct[digit] < mymap[digit]) {
                ct[digit]++;
                completed++;
            }
        }
        
        if (completed == 8) { 
            min_steps = i + 1;
            break;
        }
    }
    
    if (min_steps != 0) {
        cout << min_steps << "\n";
    } else {
        cout << 0 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
