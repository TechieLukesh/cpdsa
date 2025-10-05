#include <iostream>
#include <vector>
typedef long long ll;

using namespace std;

vector<int> primes;
vector<bool> isPrime(9e7 + 1);

void sieve()
{
    int maxN = 9e7;
    isPrime[0] = isPrime[1] = true;

    for (ll i = 2; i * i <= maxN; i++)
    {
        if (!isPrime[i])
        {
            for (ll j = i * i; j <= maxN; j += i)
            {
                isPrime[j] = true;
            }
        }
    }

    for (int i = 2; i <= maxN; i++)
    {
        if (!isPrime[i])
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    int n, t;
    cin >> t;

    sieve();
    while (t--)
    {
        cin >> n;
        cout << primes[n - 1] << "\n";
    }
}
