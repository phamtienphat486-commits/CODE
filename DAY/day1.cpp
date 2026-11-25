#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long Tong = 0;
    long long R = 0;
    int dem=0;
    long long N;
    long long bandau=N;
    cin >> N;
    while (N != 0)
    {
        int x = N % 10;
        dem++;
        Tong += x;
        R = R * 10 + x;

        N /= 10;
    }
    if(bandau%10 == R %10)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }

    cout << dem << '\n';
    cout << Tong << '\n';
    cout << R << '\n';

    return 0;
}