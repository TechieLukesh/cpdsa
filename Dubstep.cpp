#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <sstream>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;

const int mod = 1000000007;

void solve()
{
    string s;
    getline(cin, s);

    string result;
    for (int i = 0; i < s.length();)
    {
        if (s.substr(i, 3) == "WUB")
        {
            result += ' ';
            i += 3;
        }
        else
        {
            result += s[i];
            i++;
        }
    }

    stringstream ss(result);
    string word;
    string cleaned;

    while (ss >> word)
    {
        if (!cleaned.empty())
            cleaned += ' ';
        cleaned += word;
    }

    cout << cleaned << "\n";
}

int main()
{
    solve();
    return 0;
}