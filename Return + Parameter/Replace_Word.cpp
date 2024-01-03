#include <bits\stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string s, x;
        cin >> s >> x;

        int obosthan_Khuji = s.find(x);

        while (obosthan_Khuji != -1)
        {
            s.replace(obosthan_Khuji, x.size(), "#"); 
            obosthan_Khuji = s.find(x, obosthan_Khuji + 1);
        }

        cout << s << endl;
    }

    return 0;
}