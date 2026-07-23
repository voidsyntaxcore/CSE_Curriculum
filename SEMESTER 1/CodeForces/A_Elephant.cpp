#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

ll sign(ll x)
{
    return (x > 0) - (x < 0);
}

int main()
{
    ll x;
    cin >> x;
    cout << x / 5 + sign(x % 5);

    return 0;
}