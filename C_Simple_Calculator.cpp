#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        string s, x;
        cin >> s >> x;

        int pos = s.find(x);
        while (pos != -1) {
            s.replace(pos, x.length(), "#");  // replace with "#"
            pos = s.find(x, pos + 1);
        }

        cout << s << endl;
    }

    return 0;
}
