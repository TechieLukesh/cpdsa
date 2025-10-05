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

string solve()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string res = "";
    res.push_back(s1[0]);
    res.push_back(s2[0]);
    res.push_back(s3[0]);

    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << "\n";
    }
    return 0;
}