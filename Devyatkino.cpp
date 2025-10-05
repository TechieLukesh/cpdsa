#include <iostream>
#include <string>
using namespace std;

// Function to check if a number contains the digit '7'
bool containsSeven(long long n) {
    while (n > 0) {
        if (n % 10 == 7) {
            return true;
        }
        n /= 10;
    }
    return false;
}

// Function to calculate the minimum number of operations
int minOperations(long long n) {
    int operations = 0;
    while (!containsSeven(n)) {
        // Add the smallest possible number made of 9s (e.g., 9, 99, 999, etc.)
        long long add = 9;
        while (add <= 1e18) { // To avoid overflow, limit the size of 'add'
            if (!containsSeven(n + add)) {
                add = add * 10 + 9; // Try a larger number of 9s
            } else {
                break;
            }
        }
        n += add;
        operations++;
    }
    return operations;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        long long n;
        cin >> n; // Input number
        if (containsSeven(n)) {
            cout << 0 << endl; // No operations needed if '7' is already present
        } else {
            cout << minOperations(n) << endl; // Calculate and output the minimum operations
        }
    }
    return 0;
}