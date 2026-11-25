#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll N,Tong=0;
    ll R=0;
    cin >> N;
    ll bandau=N;
    while(N!=0)
    {
        int x =N%10;
        Tong +=x;
        R=R * 10 + x;
        N/=10;
    }
    ll bd=bandau%10,r=R%10;
    if(Tong%3==0 and bd==r)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

}