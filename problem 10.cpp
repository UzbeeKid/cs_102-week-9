#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    for (int r = 1; r <= n; ++r) {
        for (int i = r - 1; i >= 0; --i) {
            cout << (char)('A' + i);
        }
        cout << '\n';
    }

    return 0;
}
