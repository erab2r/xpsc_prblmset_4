#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> e(n + 2, 0);

    for (int i = 0; i < m; i++) {
        int L, R;
        cin >> L >> R;
        e[L]++;
        e[R + 1]--;
    }

    int result = INT_MAX;
    int curr = 0;
    for (int i = 1; i <= n; i++) {
        curr += e[i];
        result = min(result, curr);
    }

    cout << result << '\n';
    return 0;
}
