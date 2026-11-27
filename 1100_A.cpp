
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;

    for (int start = 0; start < k; start++) {
        int ones = 0, minusOnes = 0;

        for (int i = 0; i < n; i++) {
            if (i % k == start) {
                continue;
            }

            if (a[i] == 1) {
                ones++;
            } else {
                minusOnes++;
            }
        }

        ans = max(ans, abs(ones - minusOnes));
    }

    cout << ans << endl;

    return 0;
}
