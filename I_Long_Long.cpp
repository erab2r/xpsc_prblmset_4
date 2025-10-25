#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        ll sum = 0;
        for (auto e : arr) 
            sum += abs(e);
        int op = 0;
        int i = 0;
        while (i < n) {
            while (i < n && arr[i] >= 0) 
                i++;
            if (i >= n) 
                break;
            op++;
            while (i < n && arr[i] <= 0) 
                i++;
        }

        cout << sum << " " << op << "\n";
    }
    return 0;
}
