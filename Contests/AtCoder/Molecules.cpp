#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        string S;
        cin >> N >> S;
        // Prepend dummy so that S[mask] corresponds to mixture mask (1 ≤ mask ≤ 2^N‑1)
        S = "0" + S;

        int FULL = (1 << N) - 1;
        vector<char> reachable(1 << N, 0);
        reachable[0] = 1; // empty set is reachable (safe)

        for (int mask = 0; mask < (1 << N); mask++)
        {
            if (!reachable[mask])
                continue;
            // try to add one new chemical i
            for (int i = 0; i < N; i++)
            {
                if (mask & (1 << i))
                    continue;
                int nxt = mask | (1 << i);
                if (S[nxt] == '0')
                {
                    // Safe mix..
                    reachable[nxt] = 1;
                }
            }
        }

        cout << (reachable[FULL] ? "Yes\n" : "No\n");
    }
    return 0;
}
