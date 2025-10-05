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
typedef vector<bool> vb;
typedef vector<ll> vll;
typedef unordered_set<int> usi;
typedef unordered_set<ll> usll;

const int mod = 1000000007;
const int MAX = 1e6 + 5;
vb isPrime(MAX, true);
usll tPrimes;

void isTPrime()
{
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i < MAX; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < MAX; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i < MAX; i++)
    {
        if (isPrime[i])
        {
            tPrimes.insert(1LL * i * i);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    isTPrime();
    while (n--)
    {
        ll x;
        cin >> x;

        if (tPrimes.count(x))

            cout << "YES\n";

        else
            cout << "NO\n";
    }
}

int main()
{
    solve();

    return 0;
}