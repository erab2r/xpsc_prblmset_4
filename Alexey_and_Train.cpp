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
        vector<long long> a(n), b(n), tm(n);
        for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
        for (int i = 0; i < n; i++) cin >> tm[i];

        long long prev_depart = 0; // departure time from previous station

        for (int i = 0; i < n; i++) {
            long long travel = a[i] - prev_depart + tm[i]; // travel from prev station
            long long arrival = prev_depart + travel;     // arrival time at station i
            long long min_stop = (b[i] - a[i] + 1) / 2;  // ceiling division
            long long depart = max(arrival + min_stop, b[i]); // departure time
            prev_depart = depart; // update for next station
        }

        cout << prev_depart << "\n"; // arrival at last station
    }

    return 0;
}
