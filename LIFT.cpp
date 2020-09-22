#include <iostream>
#define maxn 100005
using namespace std;

int n;
int k;
int a[maxn];

int main()
{

    cin >> n >> k;
    for(int i=1;i<=k;i++) cin >> a[i];

    /// cur: vị trí của thang máy hiện tại
    int cur = 1;
    for(int i=1;i<=k;i++)
    {
        /// thang máy ở tầng yêu cầu
        if(cur == a[i])
        {
            continue;
        }
        /// thang máy không ở tầng yêu cầu
        if(a[i] % 2 == 0)
        {
            /// tầng yêu cầu là chắn
            /// lấy min để đảm bảo không vượt quá số tầng tòa nhà
            cur = min(n, a[i] + 1);
            cout << cur << " ";
        }
        else
        {
            /// trường hợp tầng cần đến là lẻ, lập tức đi đến tầng đó
            cur = a[i];
            /// trường hợp đó là tầng n - 1, ta có thể đi lên tầng n luôn, tối ưu số bước
            if(a[i] == n - 1 && i < k)
            {
                cur = n;
            }
            cout << cur << " ";
        }
    }
}

