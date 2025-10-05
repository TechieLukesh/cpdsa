#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Size of the array
        vector<int> arr(n);
        vector<int> oddNo;
        vector<int> evenNo;

        // Read the array and separate into odd and even
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] % 2 != 0) {
                oddNo.push_back(arr[i]);
            } else {
                evenNo.push_back(arr[i]);
            }
        }

        // Sort even numbers in descending order
        sort(evenNo.rbegin(), evenNo.rend());

        // Sort odd numbers in descending order
        sort(oddNo.rbegin(), oddNo.rend());

        long long sum = 0;
        int score = 0;

        // Process even numbers first
        for (int x : evenNo) {
            sum += x;
            if (sum % 2 == 0) {
                score++;
                while (sum % 2 == 0) {
                    sum /= 2; // Keep dividing by 2 until it's odd
                }
            }
        }

        // Process odd numbers
        for (int x : oddNo) {
            sum += x;
            if (sum % 2 == 0) {
                score++;
                while (sum % 2 == 0) {
                    sum /= 2; // Keep dividing by 2 until it's odd
                }
            }
        }

        cout << score << endl;
    }

    return 0;
}
