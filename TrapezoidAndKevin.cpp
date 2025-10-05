#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the number of sticks
        vector<int> sticks(n);
        
        for (int i = 0; i < n; i++) {
            cin >> sticks[i]; // Read stick lengths
        }

        // Step 1: Sort the array
        sort(sticks.begin(), sticks.end());

        int leg = -1; // Variable to store the leg length
        vector<int> bases; // To store base lengths
        
        // Step 2: Iterate from the end of the vector to find pairs
        for (int i = n - 1; i >= 1; i--) {
            // Check for legs (equal lengths)
            if (sticks[i] == sticks[i - 1]) {
                // We have found a potential leg length
                if (leg == -1) {
                    leg = sticks[i]; // First leg found
                    i--; // Skip the next element since it's the same
                } else {
                    // We already have one leg, now we find bases
                    if (bases.size() < 2) {
                        bases.push_back(sticks[i]);
                        i--; // Skip the next element since it's the same
                    }
                }
            } else {
                // We found different lengths, consider for bases
                if (bases.size() < 2) {
                    bases.push_back(sticks[i]); // Add to bases
                }
            }

            // Stop if we have enough legs and bases
            if (leg != -1 && bases.size() == 2) {
                break;
            }
        }

        // Step 5: Check if we have a valid leg and two bases
        if (leg != -1 && bases.size() == 2) {
            cout << leg << " " << leg << " " << bases[0] << " " << bases[1] << endl; // Output the trapezoid
        } else {
            cout << -1 << endl; // No valid trapezoid found
        }
    }
    return 0; // End of program
}
