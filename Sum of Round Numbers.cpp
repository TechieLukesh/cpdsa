#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;

const int mod = 1000000007;

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> solve()
{
    int n;
    cin >> n;

    string intToStr = to_string(n);
    int size = intToStr.size();

    int zeroCnt = 0;
    for (int i = 1; i < size; i++)
    {
        if (intToStr[i] == '0')
            zeroCnt++;
    }

    vector<int> ans;

    if (zeroCnt == size - 1)
    {
        ans.push_back(n);
        return ans;
    }

    for (int i = 0; i < size; i++)
    {
        if (intToStr[i] != '0')
        {
            string posStr = "";
            posStr += intToStr[i];
            int zeros = size - 1 - i;
            posStr += string(zeros, '0');
            ans.push_back(stoi(posStr));
        }
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> final = solve();
        cout << final.size() << "\n";
        for (int i = 0; i < final.size(); i++)
        {
            cout << final[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
