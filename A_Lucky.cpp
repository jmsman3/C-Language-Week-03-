#include <bits\stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {

        string a;
        cin >> a;

        int Sonkha_1 = a[0] - '0';
        int Sonkha_2 = a[1] - '0';
        int Sonkha_3 = a[2] - '0';
        int Sonkha_4 = a[3] - '0';
        int Sonkha_5 = a[4] - '0';
        int Sonkha_6 = a[5] - '0';

        if (Sonkha_1 + Sonkha_2 + Sonkha_3 == Sonkha_4 + Sonkha_5 + Sonkha_6)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}