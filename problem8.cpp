#include <iostream>
using namespace std;
int main() {
    long long n, p = 1;
    int m = 0;
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        if (d) p *= d;
        if (d > m) m = d;
        n /= 10;
    }
    cout << p << " " << m;
}
