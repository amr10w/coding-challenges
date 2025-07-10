#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string toBinary(long long n) {
    if (n == 0) return "0";
    string binaryString = "";
    while (n > 0) {
        binaryString = (n % 2 == 0 ? "0" : "1") + binaryString;
        n /= 2;
    }
    return binaryString;
}

long long toDecimal(const string& bin) {
    long long decimal = 0;
    long long power = 1;
    for (int i = bin.length() - 1; i >= 0; i--) {
        if (bin[i] == '1') {
            decimal += power;
        }
        power *= 2;
    }
    return decimal;
}

bool isPalindrome(const string& s) {
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());
    return s == reversed_s;
}

string createPalindrome(const string& prefix, int total_length) {
    string palindrome_str = prefix;
    string suffix = prefix;
    reverse(suffix.begin(), suffix.end());

    if (total_length % 2 == 1) {
        palindrome_str += suffix.substr(1);
    } else {
        palindrome_str += suffix;
    }
    return palindrome_str;
}

string toBinaryFixedLen(long long n, int len) {
    if (len == 0) return "";
    string binaryString = "";
    for (int i = 0; i < len; ++i) {
        binaryString = (n % 2 == 0 ? "0" : "1") + binaryString;
        n /= 2;
    }
    return binaryString;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long X;
    cin >> X;

    string X_bin = toBinary(X);

    if (isPalindrome(X_bin)) {
        cout << X << endl;
        return 0;
    }

    long long ans = 0;
    int N = X_bin.length();

    int mid_len = (N + 1) / 2;
    string prefix_str = X_bin.substr(0, mid_len);

    string p_N_str = createPalindrome(prefix_str, N);
    long long p_N_val = toDecimal(p_N_str);

    if (p_N_val > X) {
        long long prefix_val = toDecimal(prefix_str);
        prefix_val--;

        if (prefix_val > 0) {
            string new_prefix_str = toBinaryFixedLen(prefix_val, mid_len);
            p_N_str = createPalindrome(new_prefix_str, N);
            p_N_val = toDecimal(p_N_str);
            ans = p_N_val;
        }
    } else {
        ans = p_N_val;
    }
    
    if (N > 1) {
        long long p_N_minus_1_val = (1LL << (N - 1)) - 1;
        ans = max(ans, p_N_minus_1_val);
    }

    cout << ans << endl;

    return 0;
}
