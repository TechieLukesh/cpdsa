#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;


vector<int> maxFibonacciness(int t, vector<vector<int>> test_cases) {
    vector<int> results;

    for (const auto& test_case : test_cases) {
        int a1 = test_case[0];
        int a2 = test_case[1];
        int a4 = test_case[2];
        int a5 = test_case[3];

        int max_fibo = 0;

        // Possible values for a3
        set<int> possible_a3_values = {a1 + a2, a4 - a2, a5 - a4};

        for (int a3 : possible_a3_values) {
            int count = 0;
            if (a3 == a1 + a2) count++;
            if (a4 == a2 + a3) count++;
            if (a5 == a3 + a4) count++;
            max_fibo = max(max_fibo, count);
        }

        results.push_back(max_fibo);
    }

    return results;
}

int main() {
    int t;
    cin >> t;

    vector<vector<int>> test_cases(t, vector<int>(4));

    // Input test cases
    for (int i = 0; i < t; i++) {
        cin >> test_cases[i][0] >> test_cases[i][1] >> test_cases[i][2] >> test_cases[i][3];
    }

    
    vector<int> results = maxFibonacciness(t, test_cases);

   
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
