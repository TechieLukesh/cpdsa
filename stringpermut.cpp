#include <iostream>
#include <vector>
#include <map>

using namespace std;

// A fucntion to generate the permuatation

void permut(vector<char> &charac, vector<char> &result, vector<string> &resultList, int level, vector<int> &count)
{
    if (level == result.size())
    {
        resultList.push_back(string(result.begin(), result.end()));
        return;
    }

    for (size_t i = 0; i < charac.size(); i++)
    {
        if (count[i] == 0)
        {
            continue;
        }

        result[level] = charac[i];
        count[i]--;
        permut(charac, result, resultList, level + 1, count);
        count[i]++; // backtrack
    }
}

// A fucntion to store the count of the input string

vector<string> countFreq(const string &s)
{
    map<char, int> freq;

    for (char ch : s)
    {
        freq[ch]++;
    }

    // to store the string char and their frequency

    vector<char> charac;
    vector<int> count;

    for (const auto &i : freq)
    {
        charac.push_back(i.first);
        count.push_back(i.second);
    }

    // to store the temporary ans
    vector<char> result(s.length());

    // to store the ans to display
    vector<string> resultList;

    permut(charac, result, resultList, 0, count);
    return resultList;
}

int main()
{
    string s;
    cin >> s;
    vector<string> ans = countFreq(s);
    for (const string &i : ans)
    {
        cout << i << endl;
    }

    return 0;
}