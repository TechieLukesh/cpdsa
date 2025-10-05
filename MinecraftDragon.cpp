#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int bandages = 0, health = m, attack = 1;

        while (n > 0)
        {
            // Deal damage to the dragon
            if (attack % 3 == 0)
                n -= 2;
            else
                n -= 1;

            // Check if the dragon is defeated
            if (n <= 0)
                break;

            // Dragon retaliates
            health -= k;

            // Use a bandage if health drops below 1
            if (health < 1)
            {
                bandages++;
                health = m; // Restore health fully
            }

            attack++;
        }

        cout << bandages << endl;
    }
    return 0;
}