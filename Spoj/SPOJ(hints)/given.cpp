#include <bits/stdc++.h>

using namespace std;

#define ll long long

main () {
    ll n, k;
    cin >> n >> k;
    ll lg = 1;
    for (ll i = 58; i >= 0; i--) {
        if (n & (1LL << i)) {
            lg = i;
            break;
        }
    }
    if (k == 1) {
        cout << n;
    } else {
        lg++;
        cout << (1LL << lg) - 1;
    }
}