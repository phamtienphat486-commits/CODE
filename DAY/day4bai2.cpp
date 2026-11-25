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
    for(int i=0;i<N-1;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(a[i]>a[j])
            {
                ll tam=a[i];
                a[i]=a[j];
                a[j]=tam;
            }
        }
    }
    for(int i=0;i+1<a.size();i++)
    {
        if(a[i]==a[i+1])
        {
            a.erase(a.begin()+i);
            i--;
        }
    }
    for(int i=0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }
}

