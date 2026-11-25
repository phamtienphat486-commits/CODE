#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll dem=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    ll x;
    cin >> x;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
            dem++;
    }
    cout << dem;

    return 0;
}