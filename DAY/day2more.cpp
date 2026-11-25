#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll N;
    cin >> N;
    int dem=0;
    bool ktnt=true;
        for(ll i=1;i<=N/i;i++)
        {
            if(N%i==0)
            {
                if(i!=N/i)
                dem+=2;
                else
                dem++;
            }   
        }
    cout << dem ;
    
}