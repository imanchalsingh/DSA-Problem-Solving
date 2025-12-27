#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string r;
        cin >> r;
        int n = r.length();
        vector<int> s_indices;
        for (int i = 0; i < n; i++) {
            if (r[i] == 's') s_indices.push_back(i);
        }

        if (s_indices.size() < 2) {
            if (s_indices.empty()) cout << 2 << "\n";
            else cout << 1 << "\n";
            continue;
        }

        int operations = 0;
        for (int i = 0; i < n; i++) {
            if (r[i] == 'u') {
                auto it = lower_bound(s_indices.begin(), s_indices.end(), i);
                if (it == s_indices.begin() || it == s_indices.end()) {
                    operations++;
                } else {
                    int right_s = *it;
                    int left_s = *prev(it);
                    if ((right_s - i) != (i - left_s)) {
                        operations++;
                    }
                }
            }
        }
        cout << operations << "\n";
    }
    return 0;
}
