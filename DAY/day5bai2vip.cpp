#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n;

    vector<ll> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> x;

    ll dem = count(a.begin(), a.end(), x);

    cout << dem;

    return 0;
}

