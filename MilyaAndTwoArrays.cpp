#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n), b(n);
        map<long long, long long> mp1, mp2;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];

            mp1[a[i]]++;
        }

        for (long long i = 0; i < n; i++)
        {
            cin >> b[i];

            mp2[b[i]]++;
        }

        if (mp1.size() + mp2.size() >= 4)
        {
            cout << "Yes\n";
        }

        else
        {
            cout << "No\n";
        }
    }
}