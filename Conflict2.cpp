#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    string server;
    vector<string> pc(N + 1);

    int type, p;
    string s;

    while (Q--)
    {
        cin >> type >> p;
        if (type == 1)
        {
      
            pc[p] = move(server);
        }
        else if (type == 2)
        {
            cin >> s;
            pc[p] += s;
        }
        else
        {                         
            server = move(pc[p]); 
        }
    }

    cout << server << '\n';
    return 0;
}
