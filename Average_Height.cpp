#include <bits/stdc++.h>
using namespace std;

bool is_Odd(int x) {
    return x % 2 != 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        partition(a.begin(), a.end(), is_Odd); 
        for (int i = 0; i < n; i++) {
            cout << a[i] << " \n"[i == n - 1];
        }
    }
}
