#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n + 1), prf(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            prf[i] = prf[i - 1] + a[i];
        }

        long long total_sum = prf[n];

        while (q--) {
            int l, r;
            long long k;
            cin >> l >> r >> k;

            long long r_sum = prf[r] - prf[l - 1];
            long long n_sum = total_sum - r_sum + (r - l + 1) * k;

            if (n_sum % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
