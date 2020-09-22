#include <bits/stdc++.h>
using namespace std;

int t;
int n;

int main()
{

    cin >> t;

    while(t--)
    {
        cin >> n;
        int sum_digit = 0;

        while(n > 0)
        {
            sum_digit = sum_digit + n % 10;
            n = n / 10;
        }

        cout << sum_digit << endl;
    }
}
