//count of point x
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;  // y1 < y2 // x1 < x2
    int x, y, r;
    cin >> x >> y >> r;
    int cnt = 0;

    for (int j = y2; j >= y1; j--) {
        for (int i = x1; i <= x2; i++) {
            int d_squared = pow(x - i,2) + pow(y - j,2); // Squared Euclidean distance
            if (d_squared <= r * r) { // Check if the squared distance is less than or equal to r^2
                cnt++;
            }
        }
    }
    cout << cnt;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
