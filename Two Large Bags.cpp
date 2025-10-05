#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool canPair(vector<int>& arr, int n) {
    map<int, int> freq;  // Store frequency of each number

    // Count occurrences of each number
    for (int x : arr) {
        freq[x]++;
    }

    int carry = 0;  // Track the remaining elements that need pairing

    for (auto it : freq) {
        int num = it.first;
        int count = it.second + carry;  // Include carry from previous elements
        
        if (count % 2 == 1) {  // If we cannot form complete pairs
            return false;
        }
        
        carry = count / 2;  // Half of them will move to the next number
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << (canPair(arr, n) ? "YES\n" : "NO\n");
    }
    
    return 0;
}
