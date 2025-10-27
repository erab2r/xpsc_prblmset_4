#include <bits/stdc++.h>
using namespace std;
 
void fun() {
    int n;
    string ss;
    cin >> n >> ss;
    int cnt = 0;
    for(int i=0;i<n;i++) {
        cnt += (ss[i] == '1');
    }
    if(cnt % 2 == 1 || ss[0] == '0' || ss.back() == '0') {
        cout << "NO\n";
        return;
    }
    string a, b;
    int e = 0;
    bool f = false;
    for(int i = 0; i < n; i++) {
        if(ss[i] == '1') {
            a.push_back(2 * e < cnt ? '(' : ')');
            b.push_back(a.back());
            e++;
        }else {
            a.push_back(f ? '(' : ')');
            b.push_back(f ? ')' : '(');
            f = !f;
        }
    }
    cout << "YES\n" << a << '\n' << b << '\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--) 
        fun();
}