#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int c;
        if (a[0] == a[1] || a[0] == a[2]) {
            c = a[0];
        } else {
            c = a[1];
        }
        int idx = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] != c) {
                idx = i + 1; 
                break;
            }
        }

        cout << idx << "\n";
    }
    return 0;
}
