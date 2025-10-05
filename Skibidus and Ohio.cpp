#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_set>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;

const int mod = 1000000007;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;

        cin >> s;

        unordered_set<char> unique_chars;
        bool hasDuplicates = false;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == s[i - 1])
            {
                hasDuplicates = true;
                break;
            }
        }

        cout << (hasDuplicates ? 1 : s.length()) << endl;
    }
    return 0;
}