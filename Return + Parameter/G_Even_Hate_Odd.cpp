#include <bits\stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        int a[n];
        int evenCnt = 0;
        int oddCnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                evenCnt++;
            }
            else
            {
                oddCnt++;
            }
        }
        int diff = abs(evenCnt - oddCnt);

        if (diff % 2 == 0)
        {
            cout << diff / 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}