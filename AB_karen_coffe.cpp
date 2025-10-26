#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int MAX = 200000;
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> d(MAX + 2, 0);
    for (int i=0;i<n;i++) {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }
    vector<int> t_cnt(MAX + 2, 0);
    for (int i = 1; i <= MAX; i++) {
        t_cnt[i] = t_cnt[i - 1] +d[i];
    }
    vector<int> e(MAX + 2, 0);
    for (int i = 1; i <= MAX; i++) {
        e[i] = e[i - 1] + (t_cnt[i] >= k ? 1 : 0);
    }
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << (e[b] - e[a - 1]) << '\n';
    }

    return 0;
}
