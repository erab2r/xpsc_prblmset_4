#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    vector<long long> arr(n + 1);
    for (int i = 1; i <= n; i++) 
        cin >> arr[i];
    vector<int> L(m + 1), R(m + 1);
    vector<long long> D(m + 1);

    for (int i=1;i<= m;i++) {
        cin >> L[i] >> R[i] >> D[i];
    }
    vector<long long> cnt(m + 2, 0);
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        cnt[x]++;
        cnt[y + 1]--;
    }

    for (int i = 1; i <= m; i++)
        cnt[i] += cnt[i - 1];

    vector<long long> add(n + 2, 0);
    for (int i = 1; i <= m; i++) {
        long long val = D[i] * cnt[i];
        add[L[i]] += val;
        add[R[i] + 1] -= val;
    }
    for (int i = 1; i <= n; i++) {
        add[i] += add[i - 1];
        arr[i] += add[i];
    }

    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << '\n';

    return 0;
}
