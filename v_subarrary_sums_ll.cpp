#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    long long prefix_sum = 0, cnt = 0;
    map<long long, long long> freq;
    freq[0] = 1; 

    for (int i = 0; i < n; i++) {
        prefix_sum += a[i];
        if (freq.find(prefix_sum - x) != freq.end())
            cnt += freq[prefix_sum - x];
        freq[prefix_sum]++;
    }

    cout << cnt << "\n";
    return 0;
}
