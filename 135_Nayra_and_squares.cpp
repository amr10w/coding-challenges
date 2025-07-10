#include <iostream>
using namespace std;

long long integer_sqrt(long long x) {
    if (x == 0 || x == 1) return x;
    long long low = 1, high = x, ans = 0;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (mid <= x / mid) { 
            low = mid + 1;
            ans = mid;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcases;
    cin >> testcases;
    while (testcases--) {
        long long no_ofSqu, sum_of_squares = 0;
        cin >> no_ofSqu;
        for (int i = 0; i < no_ofSqu; i++) {
            long long x;
            cin >> x;
            sum_of_squares += x * x;
        }
        long long side_length = integer_sqrt(sum_of_squares);
        cout << side_length << '\n';
    }
    return 0;
}