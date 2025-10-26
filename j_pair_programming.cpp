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
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        string s;
        cin >> s;
        
        long long total = 0;
        vector<long long> gains;
        
        // Calculate base score (initially all L contribute from left)
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') total += a[i];
        }
        
        // Compute potential gains if we flip directions
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') {
                long long gain = a[n - i - 1] - a[i];
                if (gain > 0) gains.push_back(gain);
            } else {
                long long gain = a[i] - a[n - i - 1];
                if (gain > 0) gains.push_back(gain);
            }
        }
        
        // Sort gains (each positive flip adds score)
        sort(gains.rbegin(), gains.rend());
        for (auto g : gains) total += g;
        
        cout << total << "\n";
    }
}
