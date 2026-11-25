#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b;
    cin >> a >> b;
    ll m=a,n=b;
    while(b!=0)
    {
        ll r=a%b;
        a=b;
        b=r;
    }

    cout << a << "\n";
    cout << m/a*n;
    return 0;
}
   