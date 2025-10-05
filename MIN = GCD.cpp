#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int computeGCD(const vector<int> &a)
{
    if (a.empty())
        return 0;
    int res = a[0];
    for (int num : a)
    {
        res = gcd(res, num);
        if (res == 1)
            break;
    }
    return res;
}

bool solve(const vector<int> &perm)
{
    int n = perm.size();
    for (int i = 1; i < n; i++)
    {
        vector<int> first_part(perm.begin(), perm.begin() + i);
        vector<int> second_part(perm.begin() + i, perm.end());

        int min_first = *min_element(first_part.begin(), first_part.end());
        int gcd_second = computeGCD(second_part);

        if (min_first == gcd_second)
        {
            return true;
        }
    }
    return false;
}

void ans(vector<int> &a)
{
    bool found = false;
    sort(a.begin(), a.end()); // Ensure we start with the smallest permutation

    do
    {
        if (solve(a))
        {
            found = true;
            break;
        }
    } while (next_permutation(a.begin(), a.end()));

    cout << (found ? "YES" : "NO") << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ans(a); // Call the correct function that prints output
    }

    return 0;
}
