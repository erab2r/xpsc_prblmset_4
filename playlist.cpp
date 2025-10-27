#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    map<long long, int> mp; 
    int l = 0, ans = 0;
    for (int r = 0; r < n; r++) {
        mp[a[r]]++;
        while (mp[a[r]] > 1) {
            mp[a[l]]--;
            if (mp[a[l]] == 0) 
                mp.erase(a[l]);
            l++;
        }

        ans = max(ans,r-l+1);
    }

    cout << ans << "\n";
    return 0;
}
