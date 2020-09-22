#include <bits/stdc++.h>
using namespace std;

int n;
long long sum = 0;
long long evens = 0;
long long cmax = -1e18;
long long cmax_2 = -1e18;

int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        long long a;
        cin >> a;
        sum = sum + a;
        if (a % 2 == 0) evens++;

        if (a > cmax)
        {
            cmax_2 = cmax;
            cmax = a;
        }
        else if (a > cmax_2)
        {
            cmax_2 = a;
        }
    }

    cout << sum << endl;
    cout << evens << endl;
    cout << cmax << endl;
    cout << cmax * cmax_2 << endl;
}
