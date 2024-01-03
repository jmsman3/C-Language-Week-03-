#include <bits\stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a;
        cin >> a;
        string s;
        cin >> s;
        int freq[26] = {0};
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (freq[s[i] - 'A'] == 1)
            {
                cnt += 1;
            }
            else
            {
                cnt += 2;
                freq[s[i] - 'A'] = 1;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}