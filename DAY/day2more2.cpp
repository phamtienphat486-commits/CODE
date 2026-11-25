#include <bits/stdc++.h>
#define ll long long 
using namespace std;
bool ktnt(ll N)
{  
    
    if(N<2)
        return false;
    for(int i=2;i<=sqrt(N);i++)
    {
        if(N%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll L,R;
    ll a[100];
    ll dem=0;
    cin >> L >> R;
    for(int i=L;i<=R;i++)
    {
        if(ktnt (i))
        dem++;
    }
    cout << dem;
}
