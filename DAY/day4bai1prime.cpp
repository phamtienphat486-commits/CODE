#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll N;
    cin >> N;
    vector<ll> a(N);
    for(int i=0;i<N;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for (int i=0;i<N;i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    sort(a.begin(),a.end(),greater<ll>());
    for (int i=0;i<N;i++)
    {
        cout << a[i] << " ";
    }
}