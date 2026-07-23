#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

int main()
{
    ll t, a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << ((a / b + 1) * b) - a << "\n";
        }
    }

    return 0;
}