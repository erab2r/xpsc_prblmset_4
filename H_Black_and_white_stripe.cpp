#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int w_count = 0; 
        for (int i = 0;i<k;i++) {
            if (s[i] == 'W') 
                w_count++;
        }

        int mn = w_count;
        for (int i = k; i < n; i++) {
            if (s[i - k] == 'W') 
                w_count--;
            if (s[i] == 'W') 
                w_count++;
            mn = min(mn, w_count);
        }

        cout << mn << "\n";
    }

    return 0;
}
