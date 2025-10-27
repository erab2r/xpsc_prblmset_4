#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n+1), b(n+1), tm(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i] >> b[i];
        for (int i = 1; i <= n; i++) cin >> tm[i];

        long long current_time = 0; 
        for (int i = 1; i <= n; i++) {
            long long travel_time = (i == 1 ? a[i] : a[i] - b[i-1]) + tm[i];
            current_time += travel_time;

            long long min_stay = (b[i] - a[i] + 1) / 2; 
            current_time = max(current_time + min_stay, (long long)b[i]);
        }

        cout << current_time << "\n";
    }
}
