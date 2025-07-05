#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<int, int> mp;
    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
    }

    //sort(v.begin(), v.end());
    int cnt = 0;

    while (!mp.empty()) {
        cnt++;


        for (auto it = mp.begin(); it != mp.end(); ) {
            it->second--;
            if (it->second == 0) {
                it = mp.erase(it);
            } else {
                ++it;
            }
        }
    }

    cout << cnt << "\n";
    return 0;
}
