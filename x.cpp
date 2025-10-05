#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 998244353;

vector<int> powerOfTwo = {1};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int n;
        cin >> n;

        vector<int> p(n), q(n), posInP(n), posInQ(n);

        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            posInP[p[i]] = i;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> q[i];
            posInQ[q[i]] = i;
        }

        // Precompute powers of 2 modulo MOD
        while ((int)powerOfTwo.size() <= n)
        {
            powerOfTwo.push_back((powerOfTwo.back() * 2) % MOD);
        }

        vector<int> maxPrefixP(n), maxPrefixQ(n);
        maxPrefixP[0] = p[0];
        maxPrefixQ[0] = q[0];

        for (int i = 1; i < n; i++)
        {
            maxPrefixP[i] = max(maxPrefixP[i - 1], p[i]);
            maxPrefixQ[i] = max(maxPrefixQ[i - 1], q[i]);
        }

        vector<int> result(n);

        for (int i = 0; i < n; i++)
        {
            int maxElem = max(maxPrefixP[i], maxPrefixQ[i]);
            int secondaryElem;

            if (maxPrefixP[i] > maxPrefixQ[i])
            {
                int j = posInP[maxElem];
                int k = i - j;
                secondaryElem = q[k];
            }
            else if (maxPrefixQ[i] > maxPrefixP[i])
            {
                int k = posInQ[maxElem];
                int j = i - k;
                secondaryElem = p[j];
            }
            else
            {
                int j1 = posInP[maxElem];
                int k1 = i - j1;
                int s1 = (k1 >= 0 && k1 < n ? q[k1] : -1);

                int k2 = posInQ[maxElem];
                int j2 = i - k2;
                int s2 = (j2 >= 0 && j2 < n ? p[j2] : -1);

                secondaryElem = max(s1, s2);
            }

            result[i] = (powerOfTwo[maxElem] + powerOfTwo[secondaryElem]) % MOD;
        }

        for (int val : result)
            cout << val << " ";
        cout << '\n';
    }

    return 0;
}
