#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void fun() {
    ll n, m, e;
    cin >> n >> m >> e;
    e--;
    ll col = e / n;
    ll row = e % n;
    cout << row * m + col + 1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
        fun();
    }
}