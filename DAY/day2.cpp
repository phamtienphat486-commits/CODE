#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll N;
    cin >> N;
    bool ktnt=true;
    if(N<2)
        ktnt=false;
    else
    {
        for(ll i=2;i<=N/i;i++)
        {
            if(N%i==0)
            {
                ktnt=false;
                break;
            }   
        }
    }
    if(ktnt)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}