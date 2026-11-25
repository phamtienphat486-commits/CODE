#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll N;
    cin >> N;
    vector<ll> a(N);
    for(int i=0;i<N;i++)
    {
        cin >> a[i];
    }
    ll X=a[0];
    ll Y=a[0];
    for(int i=0;i<N;i++)
    {
        if(a[i]>X)
        {
            X=a[i];
        }
         if(a[i]<Y)
        {
            Y=a[i];
        }
    }
    cout << X << " ";
    cout << Y << " ";


}
