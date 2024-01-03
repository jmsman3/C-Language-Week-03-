#include <bits\stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;

    bool Jesica_khuje_paile = false; 

    while (ss >> word) //ss theke word er vitor jacche
    {
        if (word == "Jessica")
        {
            Jesica_khuje_paile = true;
            break;
        }
    }

    if (Jesica_khuje_paile)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
