#include<bits/stdc++.h>

using namespace std;

int g[4];

int main()
{
    freopen("PARA.inp","r",stdin);

    cin >> g[0] >> g[1] >> g[2] >> g[3];

    sort(g, g + 4);

    if (g[0] == g[1] && g[2] == g[3])
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
