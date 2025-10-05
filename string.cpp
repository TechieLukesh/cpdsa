#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); 

    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s); 
        int count = 0;
        for (char c : s) {
            if (c == '1') {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
