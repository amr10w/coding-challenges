#include <iostream>
#include <vector>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int q;
    cin >> q;
 
    while (q--) {
        long long n, k;
        cin >> n >> k;
 
        long long pos[k + 1], temp[k + 1];
        long long pre[n + 2], su[n + 2];
        
 
        for (int i = 1; i <= k; i++) {
            cin >> pos[i];
        }
 
        for (int i = 1; i <= k; i++) {
            cin >> temp[i];
        }
 
        for (int i = 0; i < n + 2; i++) {
            pre[i] = 10000000000;
            su[i] = 10000000000;
        }
 
        for (int i = 1; i <= k; i++) {
            pre[pos[i]] = temp[i];
            su[pos[i]] = temp[i];
        }
 
        for (int i = 1; i <= n + 1; i++) {
            pre[i] = min(pre[i - 1] + 1, pre[i]);
        }
 
        for (int i = n; i >= 0; i--) {
            su[i] = min(su[i + 1] + 1, su[i]);
        }
        long long ans[n + 2];
 
        for (int i = 1; i <= n + 1; i++) {
            ans[i] = min(pre[i], su[i]);
        }
 
        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
 
    return 0;
}