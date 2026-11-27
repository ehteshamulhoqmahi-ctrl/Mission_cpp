
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        int countA = 0, countB = 0;

        while (a % 2 == 0) {
            a /= 2;
            countA++;
        }

        while (b % 2 == 0) {
            b /= 2;
            countB++;
        }

        if (a != b) {
            cout << -1 << endl;
        }
        else {
            int diff = abs(countA - countB);
            cout << (diff + 2) / 3 << endl;
        }
    }

    return 0;
}
