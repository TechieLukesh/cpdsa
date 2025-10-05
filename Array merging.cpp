#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

#define int long long
#define vi vector<int>

// Function to get the element with max frequency and its count
pair<int, int> getMaxFreqElementAndCount(const vi &vec)
{
    unordered_map<int, int> freq;
    for (int i = 0; i < vec.size(); i++)
    {
        freq[vec[i]]++;
    }

    int maxFreq = 0;
    int maxElement = -1;
    unordered_map<int, int>::iterator it;
    for (it = freq.begin(); it != freq.end(); ++it)
    {
        if (it->second > maxFreq)
        {
            maxFreq = it->second;
            maxElement = it->first;
        }
    }

    return make_pair(maxElement, maxFreq);
}

// Function to count how many times a given element appears in another vector
int countInOther(const vi &vec, int element)
{
    int cnt = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == element)
            cnt++;
    }
    return cnt;
}

int32_t main()
{
    int n;
    cin >> n;

    vi a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    pair<int, int> maxAinfo = getMaxFreqElementAndCount(a);
    int maxA = maxAinfo.first;
    int freqA = maxAinfo.second;
    int totalA = freqA + countInOther(b, maxA);

    pair<int, int> maxBinfo = getMaxFreqElementAndCount(b);
    int maxB = maxBinfo.first;
    int freqB = maxBinfo.second;
    int totalB = freqB + countInOther(a, maxB);

    cout << max(totalA, totalB) << "\n";

    return 0;
}
