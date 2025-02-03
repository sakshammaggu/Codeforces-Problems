#include <iostream>
#include <string>
using namespace std;
bool solve(string &s) {
    int n = s.length();

    for (int i=0; i<n-1; i++) {
        int cnt = 1;
        for (int j=i+1; j<n; j++) {
            if (s[i] == s[j]) {
                cnt++;
            } else {
                break;
            }
        }

        if (cnt >= 7) return true;
    }

    return false;
}
int main() {
    string s;
    cin >> s;

    bool ans = solve(s);
    cout << (ans ? "YES" : "NO") << endl;
}

// Time Complexity (TC): O(N^2)
// Space Complexity (SC): O(1)