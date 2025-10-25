#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        string s;
        cin >> n >> s;
        int l = 0, r = n - 1;
        while (l < r && s[l] != s[r]) {
            l++;
            r--;
        }
        cout << (r-l+1) << "\n";
    }
    return 0;
}
