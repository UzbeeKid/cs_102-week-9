
#include <iostream>
using namespace std;
bool isPalindrome(int n) {
    int rev = 0, t = n;
    while (t > 0) {
        rev = rev * 10 + t % 10;
        t /= 10;
    }
    return rev == n;
}
int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (isPalindrome(i)) sum += i;
    cout << sum << endl;
}
