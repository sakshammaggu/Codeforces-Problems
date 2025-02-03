#include <iostream>
#include <string>
using namespace std;

string solve(string &s) {
    int n = s.length();

    if (n <= 10) {
        return s;
    }

    string ans = "";
    ans += s[0];
    ans += to_string(n-2);
    ans += s[n-1];

    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string ans = solve(s);
        cout << ans << endl;
    }
}

// Time Complexity (TC): O(t)
// Space Complexity (SC): O(1)