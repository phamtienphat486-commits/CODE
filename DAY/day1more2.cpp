#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll N;
    bool tang=true;
    cin >> N;
    int truoc = N%10;
    N/=10;
    while(N!=0)
    {
        int sau=N%10;
        if(sau>=truoc)
        {
            tang=false;
            break;
        }
        truoc=sau;
        N/=10;
    }
    if(tang==true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}