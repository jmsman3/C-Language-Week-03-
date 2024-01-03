#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int flag = 1;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            flag = 0;
        }
        i++;
        j--;
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}