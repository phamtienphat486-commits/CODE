#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,c;
    cin >> a >> b >> c;
    ll g = uc(uc(a,b),c);
    ll l = bc(bc(a,b),c);

    cout << g << '\n';
    cout << l;
    
}
ll uc(ll x,ll y)
{
    while(y!=0)
    {
        ll r=x%y;
        x=y;
        y=r;
    }
    return x;
}
ll bc(ll x,ll y)
{
    return x/ uc(x,y)*y;
}
