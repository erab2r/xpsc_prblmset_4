#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    map<ll, ll> freq;
    ll left = 0, ans = 0, distinct = 0;

    for (ll right = 0; right < n; right++) {
        freq[a[right]]++;
        if (freq[a[right]] == 1)
            distinct++; 

        while (distinct > k) {
            freq[a[left]]--;
            if (freq[a[left]] == 0)
                distinct--;
            left++;
        }

        ans += (right - left + 1);
    }

    cout << ans << "\n";
    return 0;
}
