#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;

const int mod = 1000000007;

string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

class Solution
{
    string solve(const string &typed, char dir, int i)
    {
        if (i == typed.size())
            return "";

        int idx = keyboard.find(typed[i]);

        char shouldBe;

        if (dir == 'R')

            shouldBe = keyboard[idx - 1];

        else
            shouldBe = keyboard[idx + 1];

        return shouldBe + solve(typed, dir, i + 1);
    }

public:
    string correctWord(const string &typed, char dir)
    {
        return solve(typed, dir, 0);
    }
};

int main()
{
    string typed;
    char dir;
    cin >> dir >> typed;
    Solution sol;
    cout << sol.correctWord(typed, dir) << "\n";
}